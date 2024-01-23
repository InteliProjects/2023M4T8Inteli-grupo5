// Função para obter o valor de um parâmetro na URL
function obterValorParametro(parametro) {
    const urlSearchParams = new URLSearchParams(window.location.search);
    return urlSearchParams.get(parametro);
}

let numeroParametro; // Variável para armazenar o valor do parâmetro 'numero' da URL

function formatarDataHoraParaSQLite(dateTime) {
    return dateTime.toISOString().replace('T', ' ').replace(/\.\d{3}Z$/, '');
}

// Quando o documento HTML estiver completamente carregado
document.addEventListener('DOMContentLoaded', function () {
    // Obter o valor do parâmetro 'numero' da URL
    numeroParametro = obterValorParametro('numero');

    // Adicionar um evento de clique ao botão com o id 'iniciarViagemBtn'
    document.getElementById('iniciarViagemBtn').addEventListener('click', function () {
        // Obter os valores dos campos de entrada
        const startCity = document.getElementById('startCity').value;
        const endCity = document.getElementById('endCity').value;
        let assetCode = document.getElementById('assetCodeInput').value;

        // Se o número está presente na URL, use-o em vez do valor do campo de entrada
        if (numeroParametro !== null) {
            assetCode = numeroParametro;
        }

        // Capturar a data e hora atuais em formato ISO 8601
        const dataHoraInicio = new Date().toISOString();

        const viagemFinalizada = 0; // false é igual a 0

        // Enviar uma solicitação POST para o servidor
        fetch('/comecar_viagem', {
            method: 'POST',
            headers: {
                'Content-Type': 'application/json',
            },
            body: JSON.stringify({
                startCity,
                endCity,
                assetCode,
                dataHoraInicio,
                viagemFinalizada
            }),
        })
        .then((response) => response.json()) // Processar a resposta como JSON
        .then((data) => {
            console.log(data); // Imprimir os dados da resposta no console
        })
        .catch((error) => {
            console.error(error); // Lidar com erros, se houver algum
        });
    });
});
