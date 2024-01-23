const express = require('express');  // Importa o módulo Express
const path = require('path');        // Importa o módulo Path
const sqlite3 = require('sqlite3').verbose();  // Importa o módulo SQLite3 com modo verbose
const router = express.Router();     // Cria uma instância de roteador Express
const bodyParser = require('body-parser');  // Importa o módulo Body Parser para análise de corpo de solicitação
router.use(bodyParser.json());       // Usa o middleware Body Parser para análise de JSON

const fs = require('fs');            // Importa o módulo File System

// Abre a conexão com o banco de dados
let db = new sqlite3.Database('public/viagens.db', sqlite3.OPEN_READWRITE, (err) => {
    if (err) {
        console.error(err.message);
    } else {
        console.log('Conectado ao banco de dados viagens.db');
    }
});

// Rota para servir a página principal
router.get('/', (req, res) => {
    res.sendFile(path.join(__dirname, 'public/frontend/home.html'));
});

// Rota para começar uma viagem com um código ativo opcional
router.get('/comecar_viagem/:codigo_ativo?', (req, res) => {
    const codigo_ativo = req.params.codigo_ativo || '';

    fs.readFile(path.join(__dirname, 'public/frontend/comecar.html'), 'utf8', function (err, html) {
        if (err) {
            console.error(err);
            return res.status(500).send('Erro ao carregar a página');
        }

        // Injeta o código ativo no HTML usando JavaScript
        const modifiedHtml = html.replace('<!--INJETAR_CODIGO_ATIVO-->', `<script>document.addEventListener('DOMContentLoaded', function() { document.getElementById('assetCodeInput').value = '${codigo_ativo}'; });</script>`);

        res.send(modifiedHtml);
    });
});
// Rota para começar uma viagem ao receber uma solicitação POST
router.post('/comecar_viagem/:codigo_ativo?', (req, res) => {
    // Extrai os dados do corpo da requisição
    let { startCity, endCity, assetCode, dataHoraInicio, viagemFinalizada } = req.body;
    const codigo_ativo = req.params.codigo_ativo;

    // Se o código_ativo está presente na URL, use-o em vez do valor do corpo da requisição
    if (codigo_ativo) {
        assetCode = codigo_ativo;
    }

    // Aqui você insere os dados no banco de dados SQLite
    const sql = `INSERT INTO trips (local_saida, destino, codigo_ativo, data_hora_inicio, viagem_finalizada) VALUES (?, ?, ?, ?, ?)`;
    db.run(sql, [startCity, endCity, assetCode, dataHoraInicio, viagemFinalizada], function (err) {
        if (err) {
            return console.error(err.message);
        }
        res.send({ message: "Viagem iniciada com sucesso!" });
    });
});

// Rota para servir a página do mapa
router.get('/mapa/:idViagem/:codigo_ativo/:data_hora_inicio/:data_hora_final?', (req, res) => {
    // Extrai os parâmetros da URL
    let { idViagem, codigo_ativo, data_hora_inicio, data_hora_final } = req.params;
    let sql;
    let params = [codigo_ativo, data_hora_inicio];

    // Verifica se a data_hora_final está presente e ajusta a consulta SQL
    if (data_hora_final) {
        sql = 'SELECT latitude, longitude, data_hora FROM locs WHERE codigo_ativo = ? AND data_hora >= ? AND data_hora <= ?';
        params.push(data_hora_final);
    } else {
        sql = 'SELECT latitude, longitude, data_hora FROM locs WHERE codigo_ativo = ? AND data_hora >= ?';
    }

    // Executa a consulta SQL e envia os resultados para a página do mapa
    db.all(sql, params, (err, rows) => {
        if (err) {
            console.error(err.message);
            return res.status(500).send('Erro ao buscar dados de localização');
        }

        // Lê o arquivo HTML da página do mapa e substitui os dados de localização
        fs.readFile(path.join(__dirname, 'public/frontend/mapa.html'), 'utf8', (err, html) => {
            if (err) {
                console.error(err);
                return res.status(500).send('Erro ao carregar a página do mapa');
            }

            const modifiedHtml = html.replace('var locData = [];', `var locData = ${JSON.stringify(rows)};`);
            res.send(modifiedHtml);
        });
    });
});


// Rota para servir a página de registrar ativo
router.get('/registrar', (req, res) => {
    // Envia o arquivo HTML da página de registro de ativos
    res.sendFile(path.join(__dirname, 'public/frontend/registrar.html'));
});

// Rota para buscar dados de viagens com base em parâmetros de consulta
function filtrarViagens(req, res) {
    const { local_saida, destino, codigo_ativo, viagemFinalizada } = req.query;

    let sql = 'SELECT * FROM trips';
    let params = [];
    let conditions = [];

    // Constrói a consulta SQL dinamicamente com base nos parâmetros de consulta
    if (local_saida) {
        conditions.push("local_saida LIKE ?");
        params.push(`%${local_saida}%`);
    }
    if (destino) {
        conditions.push("destino LIKE ?");
        params.push(`%${destino}%`);
    }
    if (codigo_ativo) {
        conditions.push("codigo_ativo = ?");
        params.push(codigo_ativo);
    }
    if (viagemFinalizada !== undefined) {
        conditions.push("viagem_finalizada = ?");
        params.push(viagemFinalizada);
    }

    if (conditions.length > 0) {
        sql += ' WHERE ' + conditions.join(' AND ');
    }

    // Executa a consulta SQL e retorna os resultados como JSON
    db.all(sql, params, (err, rows) => {
        if (err) {
            console.error(err.message);
            res.status(500).send({ error: err.message });
            return;
        }
        res.json(rows);
    });
}

// Rota para servir a página de viagem e buscar dados de viagens (com ou sem parâmetros de consulta)
router.get('/viagem', (req, res) => {
    if (Object.keys(req.query).length === 0) {
        // Se não houver parâmetros de consulta, envia o arquivo HTML da página de viagem
        res.sendFile(path.join(__dirname, 'public/frontend/viagem.html'));
    } else {
        // Se houver parâmetros de consulta, chama a função filtrarViagens para buscar dados de viagens
        filtrarViagens(req, res);
    }
});

// Rota para servir a página de entrega e buscar dados de viagens (com ou sem parâmetros de consulta)
router.get('/entrega', (req, res) => {
    // Se houver parâmetros de consulta, chama a função filtrarViagens para buscar dados de viagens
    if (Object.keys(req.query).length > 0) {
        filtrarViagens(req, res);
    } else {
        // Se não houver parâmetros de consulta, envia o arquivo HTML da página de entrega
        res.sendFile(path.join(__dirname, 'public/frontend/entrega.html'));
    }
});
// Rota para finalizar viagens ao receber uma solicitação POST
router.post('/entrega', (req, res) => {
    const { idViagem } = req.body;
    
    // Use a função strftime do SQLite para formatar a data e hora no formato ISO 8601
    const sql = "UPDATE trips SET viagem_finalizada = 1, data_hora_final = strftime('%Y-%m-%dT%H:%M:%fZ', 'now') WHERE id_viagem = ?";
    
    // Execute a consulta SQL para marcar a viagem como finalizada
    db.run(sql, [idViagem], function(err) {
        if (err) {
            console.error(err.message);
            res.status(500).send({ error: err.message });
            return;
        }
        res.json({ message: 'Viagem finalizada com sucesso!' });
    });
});

// Rota para servir a página de entrega com um código ativo opcional
router.get('/entrega/:codigo_ativo?', (req, res) => {
    const codigo_ativo = req.params.codigo_ativo || '';

    // Leia o arquivo HTML da página de entrega
    fs.readFile(path.join(__dirname, 'public/frontend/entrega.html'), 'utf8', function (err, html) {
        if (err) {
            console.error(err);
            return res.status(500).send('Erro ao carregar a página');
        }

        // Substitua um marcador no HTML pelo código ativo
        let modifiedHtml = html.replace('<!--CODIGO_ATIVO-->', codigo_ativo);

        res.send(modifiedHtml);
    });
});

// Exporta o roteador para uso em outros arquivos
module.exports = router;
