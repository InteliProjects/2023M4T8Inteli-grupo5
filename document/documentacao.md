# Documentação IoTDoc - Módulo 4 - Inteli


## GP5

#### Bruno Gottardo Conti, Daniel Zular, Enzo Boccia Pagliara, Murilo de Souza Prianti Silva, Pedro Faria Santos, Théo Tosto

<img src="../assets/inteli.png">

## Sumário

[1. Introdução](#c1)

[2. Metodologia](#c2)

[3. Desenvolvimento e Resultados](#c3)

[4. Possibilidades de Descarte](#c4)

[5. Conclusões e Recomendações](#c5)

[6. Referências](#c6)

<br>


# <a name="c1"></a>1. Introdução

&emsp;&emsp;A Rede Nacional de Ensino e Pesquisa (RNP) é uma organização brasileira, com sedes no Rio de Janeiro, Campinas e Brasília, que atua nacionalmente na área de tecnologia, prestando serviços para instituições de educação e pesquisa. Os serviços incluem distribuição de internet e projetos de inovação. Como resposta às dificuldades de controle e visibilidade sobre os ativos da empresa, que levam a perda de materiais, desperdício de recursos e objeções em planejamentos, traremos uma resolução através do projeto. Tal resolução envolve ferramentas tecnológicas de autoria própria que serão utilizadas para mapear a localização de ativos da RNP, colaborando com a vinculação, controle e visibilidade desses materiais. 

## 1.1 Objetivos

&emsp;&emsp;O presente projeto, realizado em conformidade à parceria entre a RNP e o Inteli, se trata de um protótipo que permite mapear a localização de ativos distribuídos pelo país e fornecer, por uma plataforma web, informações sobre os mesmos. Esse protótipo possibilitará a melhora na eficiência da gestão dos materiais, diminuição de desperdício, redução de custos e diversos outros benefícios. Deste modo, as instituições que recebem um suporte da RNP poderão aproveitar de um serviço aprimorado e com capacidade de desenvolvimento.

## 1.2 Proposta da solução

&emsp;&emsp;A solução proposta pelo nosso grupo visa perfazer com todos os objetivos apresentados anteriormente. Em suma, desenvolveremos um equipamento de hardware capaz de rastrear os ativos da RNP usando tecnologia GPS, conectado com uma interface web. Esse software oferecerá um serviço de cadastramento dos ativos da empresa a serem rastreados e informações sobre os mesmos. Deste modo, qualquer mudança referente a localização durante um transporte será registrada no sistema.

## 1.3 Justificativa

&emsp;&emsp;Um sistema capaz de cadastrar e rastrear os ativos da RNP se faz necessário a partir do momento em que a situação atual dos materiais é internamente prejudicial à empresa. Até o momento, os ativos estão sujeitos a perda e causa de desperdício. O controle deles reduzirá custos administrativos, diminuindo desperdício e agilizando a implementação de equipamentos. O nosso projeto se destaca pela autoria e personalização, que visa atender a todos os requisitos da RNP.

# <a name="c2"></a>2. Metodologia

&emsp;&emsp; **O que é uma metodologia?**

Uma metodologia é um conjunto de procedimentos, técnicas e ferramentas utilizadas para alcançar um objetivo específico ou resolver um problema particular. Ela serve como um guia estruturado que ajuda a organizar e a sistematizar o processo de trabalho, garantindo consistência, eficiência e a qualidade dos resultados.

&emsp;&emsp;**Por que usamos uma metodologia**

No contexto de um projeto de Internet das Coisas (IoT), a utilização de uma metodologia é crucial devido à complexidade e à interdisciplinaridade dessa área. A metodologia ajuda a garantir que todas as etapas do projeto - desde o planejamento, passando pelo desenvolvimento até a implementação e a manutenção - sejam executadas de forma ordenada e eficiente.  Ao adotar uma metodologia, o projeto tem mais chances de sucesso, pois os riscos são mitigados e os recursos são utilizados de maneira mais eficaz.

[O que é uma metodologia?](https://www.mjvinnovation.com/pt-br/blog/metodologia-de-projeto/)

&emsp;&emsp; A metodologia RM-ODP (Reference Model for Open Distributed Processing) é uma abordagem para o desenvolvimento de sistemas distribuídos que se baseia em princípios e conceitos bem definidos. As etapas da metodologia RM-ODP incluem:

1. Especificação de Requisitos: Esta etapa envolve a identificação e documentação dos requisitos funcionais e não funcionais do sistema distribuído, com base nas necessidades dos stakeholders.

2. Análise de Requisitos: Nesta fase, os requisitos coletados na etapa anterior são analisados detalhadamente para entender melhor as necessidades e restrições do sistema.

3. Especificação de Arquitetura: A arquitetura do sistema é projetada nesta etapa, definindo componentes, interfaces, padrões de comunicação e modelos de comportamento.

4. Projeto Detalhado: O projeto detalhado do sistema é desenvolvido com base na especificação de arquitetura, incluindo especificações técnicas detalhadas para cada componente.

5. Implementação: Nesta etapa, o código-fonte real do sistema é desenvolvido com base nas especificações do projeto detalhado.

6. Testes e Validação: O sistema implementado é testado e validado para garantir que atenda aos requisitos especificados, incluindo testes funcionais e de desempenho.

7. Implantação: O sistema é implantado no ambiente de produção, tornando-o disponível para uso pelos stakeholders.

8. Operação e Manutenção: Após a implantação, o sistema entra em operação e requer manutenção contínua para corrigir problemas, aplicar atualizações e realizar melhorias conforme necessário.

### Referencial Teórico:

&emsp;&emsp; A metodologia RM-ODP é baseada em documentos técnicos internacionais desenvolvidos pela ISO (International Organization for Standardization) e ITU-T (International Telecommunication Union - Telecom). O principal documento de referência é a ISO/IEC 10746, que define a estrutura conceitual do RM-ODP e fornece diretrizes gerais para sua aplicação. Além disso, a metodologia RM-ODP incorpora conceitos de modelagem e especificação formal, como a linguagem de especificação formal Z, que pode ser usada para descrever formalmente aspectos do sistema durante as várias etapas do processo de desenvolvimento.

# <a name="c3"></a>3. Desenvolvimento e Resultados 
###### Seção destinada para Domínio de Fundamentos de Negócio, Domínio de Fundamentos de Experiência de Usuário,Solução Técnica,Resultados


## 3.1. Domínio de Fundamentos de Negócio

### 3.1.1. Contexto da Indústria

&emsp;&emsp;A RNP é uma empresa atuante no segmento de telecomunicação no Brasil, colaborando desde 2002 com a distribuição de internet por ambientes de educação e pesquisa. Os players atuantes na área de provimento de internet são muitos, como a Claro, Vivo e Algar, porém a RNP se destaca por possuir exclusividade na prestação de serviços de rede para instituições públicas na área de educação, assegurando, assim, muitos recursos de incentivos governamentais.O modelo de negócio da RNP é centrado na prestação de serviços avançados de conectividade de internet para instituições de educação e pesquisa no Brasil. 

&emsp;&emsp;A empresa constrói e mantém uma infraestrutura de rede de alta velocidade, incluindo redes de fibra óptica, que interliga ambientes recebedores do serviço em múltiplos estados e condições de infraestrutura. Em resposta às mudanças impulsionadas pelo avanço tecnológico, incluindo IoT, computação em nuvem e necessidade de segurança, as prováveis tendências da RNP são relacionadas a maior velocidade de rede, medidas de proteção mais sofisticadas e inovações utilizando tecnologias emergentes. Além disso, é possível que um próximo passo a ser tomado seja a colaboração com o setor privado, que não está incluso no catálogo de clientes até o momento.

### 3.1.2. Análise SWOT
&emsp;&emsp;A análise SWOT é uma ferramenta empregada para avaliar a posição estratégica de uma empresa em relação ao mercado e à concorrência. Esta abordagem envolve uma avaliação dos ambientes internos (identificando as forças e fraquezas) e externo (explorando oportunidades e ameaças). Em termos simples, o ambiente interno refere-se ao que está sob o controle da empresa, enquanto o ambiente externo engloba os fatores que estão além do seu domínio, considerando o contexto em que está inserida. Quando bem desenvolvida, a análise SWOT oferece um diagnóstico confiável que destaca as reais necessidades da empresa. Isso, por sua vez, possibilita a formulação de planos de ação e estratégias de médio a longo prazos mais robustos e eficazes.


<h6 align="center"> Figura 1:  Matriz SWOT da empresa RNP </h6>

<div align="center">
	
![Análise Swot](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/SWOT_RNP.png)
</div>

<h6 align="center"> Fonte: Elaborado pelos autores </h6>

#### **Forças:**

&emsp;&emsp;**_Competência técnica →_** A organização contém uma equipe muito extensa, com aproximadamente 1000 funcionários, altamente qualificada e experiente no mercado de tecnologia e telecomunicação.

&emsp;&emsp;**_Infraestrutura avançada →_** A RNP possui uma infraestrutura de rede avançada que suporta a comunicação e colaboração em instituições de ensino e pesquisa em todas as regiões brasileiras.

&emsp;&emsp;**_Parcerias estabelecidas →_** A RNP tem parcerias, como a Eletrosul, que diminuem seus gastos a partir do compartilhamento de infraestrutura das empresas. 

#### **Fraquezas:**

&emsp;&emsp;**_Qualidade das redes →_** O sistema de redes da RNP tem uma limitação na qualidade da internet, tendo dificuldade de distribuir conexões boas para seus clientes. 

&emsp;&emsp;**_Limitações oraçamentárias →_** Mesmo com financiamento governamental, a RNP pode ter recursos limitados para investir em infraestrutura, pesquisa e desenvolvimento. Isso pode restringir sua capacidade de inovar e expandir suas operações.

&emsp;&emsp;**_Gerenciamento de ativos →_** Por ter uma grande quantidade de ativos distribuídos no Brasil, existe uma grande dificuldade deles em gerir esses produtos e ter um controlo maior sobre eles.

#### **Oportunidades:**

&emsp;&emsp;**_Empresa Privadas →_** Com o mercado brasileiro aquecido e crescendo cada vez mais, RNP poderia adentrar no mercado de empresas privadas e vender suas tecnologias.

&emsp;&emsp;**_Novas regiões →_** Com a popularização da tecnologia em um âmbito nacional, ainda existem novas regiões brasileiras para onde a RNP pode expandir seu negócio.

&emsp;&emsp;**_Educação a distância_** → Com o aumento da educação a distância, a RNP com o seu produto de videoconferência pode expandir e tornar essa sua maior mercadoria.

#### **Ameaças:**

&emsp;&emsp;**_Mudanças no Governo →_** Com a instabilidade política brasileira, a qualquer momento pode ocorrer uma mudança contratual e a RNP pode ficar sem seu principal cliente e fonte de renda. 

&emsp;&emsp;**_Crise econômica →_** Com o cenário mundial instável, em razões de guerras e a recuperação pós pandemia, pode ocorrer uma crise econômica no Brasil, assim interferindo na sua verba dada pelo governo.

&emsp;&emsp;**_Mudanças na regulamentação →_** O ano de 2022 foi o ano recorde em relação a emendas constitucionais, portanto mudanças relacionadas a licenças e lei para empresas de telecomunicações podem acontecer, deixando a RNP vulnerável.
##
&emsp;&emsp;Visto que a análise SWOT oferece um panorama completo da posição de uma empresa no mercado, concluímos que ela se destaca como uma ferramenta crucial no desenvolvimento de um projeto. Ela integra uma avaliação detalhada das forças e fraquezas internas com uma análise perspicaz das oportunidades e desafios externos. Esta abordagem multifacetada é fundamental para um entendimento profundo das dinâmicas operacionais e estratégicas da empresa. Com isso, nosso grupo pode moldar o projeto estratégias com maior eficácia, assegurando decisões mais informadas e alinhadas com as realidades tanto internas quanto externas da organização. Em suma, a análise SWOT é indispensável para impulsionar o desenvolvimento empresarial sustentável e estratégico.

### 3.1.3. Descrição da Solução a ser Desenvolvida
&emsp;&emsp;Nesta subseção, apresentaremos de forma concisa a solução proposta para aprimorar o controle e rastreamento de ativos pela RNP. Abordaremos tópicos como o problema a ser resolvido, a visão de negócios da solução, como será utilizada, os benefícios esperados, e estabeleceremos critérios de sucesso e medidas de avaliação para o projeto.

#### 3.1.3.1 Qual é o problema a ser resolvido

&emsp;&emsp;O problema a ser resolvido é a falta de controle e rastreamento eficiente dos ativos distribuídos pela RNP (Rede Nacional de Ensino e Pesquisa) no país. A situação atual resulta em perdas, desperdício e custos administrativos elevados, devido à falta de informações precisas sobre a localização e o status desses ativos.

#### 3.1.3.2 Qual a solução proposta (visão de negócios)

&emsp;&emsp;A solução proposta é o desenvolvimento de um protótipo que envolve um equipamento de hardware capaz de rastrear os ativos da RNP utilizando tecnologia GPS e uma aplicação web. Esse software permitirá o cadastramento e o acompanhamento dos ativos da empresa, registrando qualquer mudança na localização. Em termos de negócios, a solução visa melhorar a eficiência na gestão dos materiais, reduzir desperdício, diminuir custos administrativos e proporcionar benefícios significativos para as instituições que recebem suporte da RNP.

#### 3.1.3.3 Como a solução proposta deverá ser utilizada

&emsp;&emsp;A solução proposta será utilizada para cadastrar, rastrear e fornecer informações sobre os ativos distribuídos pela RNP. Os ativos serão equipados com dispositivos de rastreamento GPS, e as informações sobre sua localização e status serão registradas na interface conectada ao sistema Proteus. Os usuários poderão acessar essas informações por meio de uma API, o que possibilita um acompanhamento em tempo real da localização dos ativos e seu status.

#### 3.1.3.4 Quais os benefícios trazidos pela solução proposta

A solução proposta trará vários benefícios, incluindo:

- Melhoria na eficiência da gestão de ativos da RNP, uma vez que será possível acompanhar sua localização e status em tempo real.
- Redução de desperdício de recursos, já que os ativos não serão perdidos ou mal utilizados devido à falta de controle.
- Diminuição de custos administrativos, pois o sistema automatizado permitirá um gerenciamento mais eficaz dos ativos.
- Facilidade na implementação de equipamentos, uma vez que a localização dos ativos será conhecida, agilizando o processo.
- A capacidade de personalização da solução para atender às necessidades específicas da RNP.

#### 3.1.3.5 Qual será o critério de sucesso e qual medida será utilizada para o avaliar

Para garantir o sucesso da solução proposta, o critério principal será a eficácia na redução de perdas e custos, além do aumento da eficiência na gestão de ativos. A medida de avaliação será baseada nos seguintes indicadores:

##### Critério de Sucesso:

O critério de sucesso será alcançado se a solução demonstrar:

1. **Redução Percentual de Perdas de Ativos:** Diminuição significativa na ocorrência de perdas de ativos, medido por uma redução percentual em comparação com o período anterior à implementação da solução.

2. **Redução de Custos Administrativos:** Evidência de uma redução tangível nos custos administrativos associados à gestão de ativos, demonstrando a eficácia do sistema automatizado.

3. **Aumento na Eficiência da Gestão de Ativos:** Melhoria perceptível na eficiência operacional, medida pela capacidade de rastrear, monitorar e gerenciar ativos de forma mais rápida e precisa.

##### Medida de Avaliação:

Os indicadores serão avaliados por meio de métricas quantitativas e qualitativas, incluindo:

- **Relatórios de Perdas de Ativos:** Análise regular dos relatórios de perdas de ativos antes e após a implementação da solução.

- **Custos Administrativos:** Monitoramento contínuo dos custos administrativos associados à gestão de ativos, com comparação entre períodos.

- **Feedback dos Usuários:** Coleta de feedback dos usuários do sistema Proteus para avaliar a usabilidade, eficácia e satisfação geral com a solução.

- **Eficiência Operacional:** Acompanhamento da eficiência na gestão de ativos, considerando o tempo de resposta do sistema, precisão nas informações e facilidade de utilização.

&emsp;&emsp;Ao atingir metas específicas nessas áreas, será possível validar o sucesso da solução proposta e sua contribuição positiva para a otimização da gestão de ativos distribuídos pela RNP.

	
### 3.1.4. Value Proposition Canvas

&emsp;&emsp;O Value Proposition Canvas é uma ferramenta poderosa focado em duas áreas: o perfil do cliente e a proposta de valor. O objetivo é garantir que haja um alinhamento entre o que o cliente realmente valoriza e o que podemos oferecer. Ao utilizar o Value Proposition Canvas podemos mais claramente as necessidades e desejos do cliente.
<h6 align="center"> Figura 2:  Canvas da empresa RNP </h6>

<div align="center">
	
![Canvas](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/Value_Proposition_Canvas_RNP.png)
</div>

<h6 align="center"> Fonte: Elaborado pelos autores </h6>

&emsp;&emsp;Considerando a estrutura do Value Proposition Canvas, podemos afirmar que ele atua como uma ferramenta essencial na definição e comunicação da proposta de valor de um produto ou serviço. Ele permite uma análise integrada que conecta diretamente as necessidades e desafios dos clientes às soluções oferecidas pela empresa. Esta conexão direta entre os problemas do cliente e como a empresa planeja resolvê-los é crucial para um entendimento aprofundado das expectativas do mercado e a criação de valor real.

&emsp;&emsp;A partir deste Canvas, o nosso grupo é capaz de desenvolver estratégias que abordam de maneira precisa tanto os criadores de ganhos quanto os aliviadores de dores, garantindo que as ofertas estejam em perfeita sintonia com as demandas e desejos do segmento de clientes. Isso nos permite tomar decisões mais embasadas e alinhadas com as necessidades práticas e aspiracional dos clientes, resultando em um alinhamento estratégico efetivo.


### 3.1.5. Matriz de Riscos

&emsp;&emsp;A matriz de riscos é essencial para a gestão estratégica do grupo, Ela permite identificar, avaliar e priorizar riscos de acordo com sua probabilidade de ocorrência e o impacto potencial, tudo isso de forma visual. 

<h6 align="center"> Figura 3:  Canvas da empresa RNP </h6>

<div align="center">
	
![Matriz de risco](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/Matriz%20de%20risco.png)
</div>

<h6 align="center"> Fonte: Elaborado pelos autores </h6>

### Riscos

1. Faltar no desenvolvimento
   - **Impacto:** Moderado
     - *Justificativa:* Faltar no desenvolvimento pode atrasar o projeto e impactar negativamente a qualidade.
   - **Probabilidade:** 90%
     - *Justificativa:* A probabilidade é alta porque depende do compromisso e disponibilidade das pessoas envolvidas no desenvolvimento.

2. Problemas com o VIA
   - **Impacto:** Baixo
     - *Justificativa:* Problemas com o VIA têm um impacto baixo, pois podem ser resolvidos sem grande impacto no projeto.
   - **Probabilidade:** 70%
     - *Justificativa:* A probabilidade é razoável, uma vez que problemas técnicos podem surgir durante o desenvolvimento.

3. Algum computador dar problema
   - **Impacto:** Baixo
     - *Justificativa:* O impacto é baixo, pois problemas de hardware podem ser resolvidos rapidamente.
   - **Probabilidade:** 50%
     - *Justificativa:* A probabilidade é média, considerando a chance de falhas técnicas em computadores.

4. Desentendimento interno
   - **Impacto:** Moderado
     - *Justificativa:* O desentendimento interno pode afetar a colaboração da equipe e a qualidade do trabalho.
   - **Probabilidade:** 70%
     - *Justificativa:* A probabilidade é alta, já que desentendimentos podem ocorrer em ambientes de projeto.

5. Falha na comunicação parceiro com ateliê
   - **Impacto:** Moderado
     - *Justificativa:* Falha na comunicação pode resultar em atrasos e problemas de qualidade na produção.
   - **Probabilidade:** 50%
     - *Justificativa:* A probabilidade é média, considerando possíveis problemas de comunicação.

6. Não satisfazer as expectativas do cliente
   - **Impacto:** Moderado
     - *Justificativa:* Não atender às expectativas do cliente pode resultar em insatisfação e perda de negócios futuros.
   - **Probabilidade:** 30%
     - *Justificativa:* A probabilidade é relativamente baixa, pois depende das expectativas do cliente.

7. Problemas de hardware
   - **Impacto:** Alto
     - *Justificativa:* Problemas de hardware podem levar a interrupções significativas no projeto.
   - **Probabilidade:** 30%
     - *Justificativa:* A probabilidade é média, pois problemas de hardware não são incomuns, mas medidas podem ser tomadas para reduzi-los.

8. Falta de foco no projeto
   - **Impacto:** Alto
     - *Justificativa:* A falta de foco pode levar a atrasos e qualidade inferior no projeto.
   - **Probabilidade:** 50%
     - *Justificativa:* A probabilidade é média, uma vez que a falta de foco pode ocorrer devido a várias razões.

9. Fuga do escopo do projeto
   - **Impacto:** Alto
     - *Justificativa:* A fuga do escopo pode aumentar os custos e atrasar o projeto.
   - **Probabilidade:** 10%
     - *Justificativa:* A probabilidade é baixa, pois a equipe deve estar ciente do escopo e monitorá-lo de perto.

10. Atraso na entrega
    - **Impacto:** Muito alto
      - *Justificativa:* Atrasos na entrega podem ter consequências financeiras significativas e prejudicar a reputação da equipe.
    - **Probabilidade:** 30%
      - *Justificativa:* A probabilidade é média, uma vez que atrasos podem ocorrer devido a vários fatores.

11. Apresentador faltar no dia
    - **Impacto:** Muito alto
      - *Justificativa:* A falta do apresentador pode comprometer a qualidade da apresentação e a impressão do cliente.
    - **Probabilidade:** 10%
      - *Justificativa:* A probabilidade é baixa, pois a falta do apresentador é um evento raro.

### Oportunidades

1. Satisfazer as expectativas do cliente
   - **Impacto:** Muito alto
     - *Justificativa:* Satisfazer as expectativas do cliente pode levar a futuros negócios e uma reputação positiva.
   - **Probabilidade:** 70%
     - *Justificativa:* A probabilidade é alta, pois é um objetivo fundamental do projeto.

2. Aprofundar conhecimento nos conteúdos do módulo
   - **Impacto:** Alto
     - *Justificativa:* Aprofundar o conhecimento pode melhorar a qualidade do trabalho e a eficiência do projeto.
   - **Probabilidade:** 70%
     - *Justificativa:* A probabilidade é alta, pois a equipe pode tomar medidas proativas para aumentar seu conhecimento.

## Tabela de gestão de riscos

Finalmente, de posse de todos os riscos, é necessário pensar no gerenciamento deles. Isto pode ser conferido na tabela abaixo.  

| Risco                                | Responsável                        | Abordagem | Explicação                                                                                                                                           |
|--------------------------------------|-----------------------------------|-----------|---------------------------------------------------------------------------------------|
| Faltar no desenvolvimento            | Grupo                             | Mitigar   | Uma vez que a ausência de um membro da equipe pode causar atrasos significativos no projeto. A mitigação envolve a criação de um plano de contingência, como a disponibilidade de um substituto, para minimizar o impacto dessa situação. |
| Problema com VIA                     | Inteli                            | Reduzir   | Temos que reduzir a probabilidade de problemas com o VIA realizando testes rigorosos, pois isso ajuda a minimizar a incerteza e o risco técnico associado a esse componente. |
| Algum computador dar problema       | Integrante do grupo com o problema | Mitigar   | Uma vez que problemas de hardware podem ocorrer. Manter um estoque de peças de reposição ou um acordo de manutenção ajuda a reduzir o impacto dessas falhas. |
| Desentendimento interno              | Grupo                             | Reduzir   | Reduzir a probabilidade se baseia na promoção da comunicação eficaz e da gestão de conflitos na equipe, que são medidas preventivas para evitar desentendimentos. |
| Falha na comunicação parceiro com ateliê | Orientador/scrum masters      | Mitigar   | A mitigação é apropriada para evitar falhas de comunicação, pois envolve estabelecer canais claros e procedimentos de acompanhamento para garantir que a comunicação seja eficaz. |
| Não satisfazer as expectativas do cliente | Grupo                         | Reduzir   | Reduzir a probabilidade é a escolha apropriada, pois implica na realização de revisões regulares com o cliente para garantir que suas expectativas sejam compreendidas e atendidas, minimizando assim o risco de descontentamento. |
| Problemas de hardware                | Scrum master                      | Mitigar   | A mitigação é necessária para evitar interrupções significativas no projeto devido a problemas de hardware. Ter um plano de manutenção preventiva e estoque de peças ajuda a minimizar o impacto. |
| Falta de foco no projeto             | Scrum master/ Professores          | Evitar    | Optei por evitar a falta de foco no projeto, pois isso pode levar a atrasos e problemas de qualidade. Manter uma gestão de projeto eficaz com objetivos claros e controle de mudanças ajuda a prevenir desvios. |
| Fuga do escopo do projeto           | Scrum master                      | Reduzir   | Reduzir a probabilidade é a escolha apropriada, pois a implementação de uma rigorosa gestão de escopo e a definição clara dos limites do projeto ajuda a evitar que o projeto saia de controle. |
| Atraso na entrega                    | Grupo                             | Mitigar   | A mitigação é necessária para evitar atrasos, uma vez que a implementação de marcos intermediários e o acompanhamento próximo do progresso ajudam a minimizar o risco de atrasos. |
| Apresentador faltar no dia           | Integrante do grupo que faltou     | Mitigar   | Optei por mitigar o risco de o apresentador faltar no dia, mantendo um plano de contingência com apresentadores substitutos ou apresentações gravadas, o que ajuda a garantir que a apresentação ocorra conforme o planejado. |
<h6 align="center"> Fonte: Elaborado pelos autores </h6>


Como já visto, a matriz de risco é uma ferramenta utilizada para identificar, avaliar e priorizar os riscos associados a um projeto, processo, ou qualquer atividade que envolva incertezas. Agora, pode-se analisar com base no final do projeto, como que a nova matriz de risco se apresenta:

### 3.1.6. Política de Privacidade de acordo com a LGPD
A GP5 reconhece a importância da segurança e da privacidade das informações dos usuários de seus serviços e adota medidas para protegê-las. 

Esta Política de Privacidade descreve como coletamos, compartilhamos e utilizamos seus Dados Pessoais e como você pode exercer seus direitos de privacidade, demonstrando o compromisso da GP5 com a proteção das informações dos participantes de eventos da organização.

Recomendamos a leitura completa desta Política de Privacidade para garantir que você esteja plenamente informado e compreenda os termos apresentados. Ao fornecer seus dados a este site, você declara estar ciente e concordar com esta Política.
### Política de Privacidade - Última atualização: 08 de Novembro de 2023

A **RNP**, pessoa jurídica de direito privado, com sede na Rua Lauro Müller, 116 sala 1103 - Botafogo Rio de Janeiro - RJ - 22290-906, inscrita no CNPJ/MF sob o nº 03.508.097/0001-36, leva a sua privacidade a sério e zela pela segurança e proteção de dados de todos os seus clientes, parceiros, fornecedores e usuários do site [ sd@rnp.br ]

## Política de Privacidade

Esta Política de Privacidade (“Política de Privacidade”) destina-se a informá-lo sobre o modo como nós utilizamos e divulgamos informações coletadas em suas visitas à nosso site e em mensagens que trocamos com você (“Comunicações”).

**AO ACESSAR O SITE, ENVIAR COMUNICAÇÕES OU FORNECER QUALQUER TIPO DE DADO PESSOAL, VOCÊ DECLARA ESTAR CIENTE E DE ACORDO COM ESTA POLÍTICA DE PRIVACIDADE, A QUAL DESCREVE AS FINALIDADES E FORMAS DE TRATAMENTO DE SEUS DADOS PESSOAIS QUE VOCÊ DISPONIBILIZAR NO SITE.**

Esta Política de Privacidade fornece uma visão geral de nossas práticas de privacidade e das escolhas que você pode fazer, bem como direitos que você pode exercer em relação aos Dados Pessoais tratados por nós. Se você tiver alguma dúvida sobre o uso de Dados Pessoais, entre em contato com [sd@rnp.br](mailto:sd@rnp.br).

Além disso, a Política de Privacidade não se aplica a quaisquer aplicativos, produtos, serviços, site ou recursos de mídia social de terceiros que possam ser oferecidos ou acessados por meio da site. O acesso a esses links fará com que você deixe a site e possa resultar na coleta ou compartilhamento de informações sobre você por terceiros. Nós não controlamos, endossamos ou fazemos quaisquer representações sobre esses sites de terceiros ou suas práticas de privacidade, que podem ser diferentes das nossas. Recomendamos que você revise a política de privacidade de qualquer site com o qual você interaja antes de permitir a coleta e o uso de seus Dados Pessoais.

Caso você nos envie Dados Pessoais referentes a outras pessoas físicas, você declara ter a competência para fazê-lo e declara ter obtido o consentimento necessário para autorizar o uso de tais informações nos termos desta Política de Privacidade.

### Definições

Para os fins desta Política de Privacidade:

- **Dados Pessoais**: significa qualquer informação que, direta ou indiretamente, identifique ou possa identificar uma pessoa natural, como por exemplo, nome, CPF, data de nascimento, endereço IP, dentre outros;
- **Dados Pessoais Sensíveis**: significa qualquer informação que revele, em relação a uma pessoa natural, origem racial ou étnica, convicção religiosa, opinião política, filiação a sindicato ou a organização de caráter religioso, filosófico ou político, dado referente à saúde ou à vida sexual, dado genético ou biométrico;
- **Tratamento de Dados Pessoais**: significa qualquer operação efetuada no âmbito dos Dados Pessoais, por meio de meios automáticos ou não, tal como a recolha, gravação, organização, estruturação, armazenamento, adaptação ou alteração, recuperação, consulta, utilização, divulgação por transmissão, disseminação ou, alternativamente, disponibilização, harmonização ou associação, restrição, eliminação ou destruição. Também é considerado Tratamento de Dados Pessoais qualquer outra operação prevista nos termos da legislação aplicável;
- **Leis de Proteção de Dados**: significa todas as disposições legais que regulem o Tratamento de Dados Pessoais, incluindo, porém sem se limitar, a Lei nº 13.709/18, Lei Geral de Proteção de Dados Pessoais (“LGPD”).

### Uso de Dados Pessoais

Coletamos e usamos Dados Pessoais para gerenciar seu relacionamento conosco e melhor atendê-lo quando você estiver adquirindo produtos e/ou serviços no site, personalizando e melhorando sua experiência. Exemplos de como usamos os dados incluem:

- Viabilizar que você adquira produtos e/ou serviços no site;
- Para confirmar ou corrigir as informações que temos sobre você;
- Para enviar informações que acreditamos ser do seu interesse;
- Para personalizar sua experiência de uso do site;
- Para personalizar o envio de publicidades para você, baseada em seu interesse em nosso site; e
- Para entrarmos em contato por um número de telefone e/ou endereço de e-mail fornecido. Podemos entrar em contato com você pessoalmente, por mensagem de voz, através de equipamentos de discagem automática, por mensagens de texto (SMS), por e-mail, ou por qualquer outro meio de comunicação que seu dispositivo seja capaz de receber, nos termos da lei e para fins comerciais razoáveis.

Além disso, os Dados Pessoais fornecidos também podem ser utilizados na forma que julgarmos necessária ou adequada: (a) nos termos das Leis de Proteção de Dados; (b) para atender exigências de processo judicial; (c) para cumprir decisão judicial, decisão regulatória ou decisão de autoridades competentes, incluindo autoridades fora do país de residência; (d) para proteger nossas operações; (e) para proteger direitos, privacidade, segurança nossos, seus ou de terceiros; (f) para detectar e prevenir fraude; (g) permitir-nos usar as ações disponíveis ou limitar danos que venhamos a sofrer; (h) de outros modos permitidos por lei.

**O NOSSO SITE NÃO SE DESTINA A PESSOAS COM MENOS DE 18 (DEZOITO) ANOS E PEDIMOS QUE TAIS PESSOAS NÃO NOS FORNEÇAM QUALQUER DADO PESSOAL.**

### Não fornecimento de Dados Pessoais

Você não é obrigado a compartilhar os Dados Pessoais que solicitamos, no entanto, se você optar por não os compartilhar, em alguns casos, não poderemos fornecer a você acesso completo à site, alguns recursos especializados ou ser capaz de prestar a assistência necessária ou, ainda, viabilizar a entrega do produto ou prestar o serviço contratado por você.

### Dados coletados

O público em geral poderá navegar no site sem necessidade de qualquer cadastro e envio de Dados Pessoais. No entanto, algumas das funcionalidades do site poderão depender de cadastro e envio de Dados Pessoais como concluir a compra/contratação do serviço e/ou a viabilizar a entrega do produto/prestação do serviço por nós.

No contato o site nós podemos coletar:

- **Dados de contato.** Nome, sobrenome, número de telefone, cidade, Estado e endereço de e-mail; e
- **Informações que você envia.** Informações que você envia via formulário (dúvidas, reclamações, sugestões, críticas, elogios etc.).

Na navegação geral no site, nós poderemos coletar:

- **Dados de localização.** Dados de geolocalização quando você acessa o site;
- **Preferências.** Informações sobre suas preferências e interesses em relação aos produtos/serviços (quando você nos diz o que eles são ou quando os deduzimos do que sabemos sobre você);
- **Dados de navegação no site.** Informações sobre suas visitas e atividades no site, incluindo o conteúdo (e quaisquer anúncios) com os quais você visualiza e interage, informações sobre o navegador e o dispositivo que você está usando, seu endereço IP, sua localização, o endereço do site a partir do qual você chegou. Algumas dessas informações são coletadas usando nossas Ferramentas de Coleta Automática de Dados, que incluem cookies, web beacons e links da web incorporados. Para saber mais, leia como nós usamos Ferramentas de Coleta Automática de Dados no item 7 abaixo;
- **Dados anônimos ou agregados.** Respostas anônimas para pesquisas ou informações anônimas e agregadas sobre como o site é usufruído. Durante nossas operações, em certos casos, aplicamos um processo de desidentificação ou pseudonimização aos seus dados para que seja razoavelmente improvável que você identifique você através do uso desses dados com a tecnologia disponível; e
- **Outras informações que podemos coletar.** Outras informações que não revelem especificamente a sua identidade ou que não são diretamente relacionadas a um indivíduo, tais como informações sobre navegador e dispositivo; dados de uso do site; e informações coletadas por meio de cookies, pixel tags e outras tecnologias.

Ao menos que você informe em algum formulário livre preenchido por você, nós não coletamos Dados Pessoais Sensíveis.

### Compartilhamento de Dados Pessoais com terceiros

Nós poderemos compartilhar seus Dados Pessoais:

- Com a(s) empresa(s) parceira(s) que você selecionar ou optar em enviar os seus dados, dúvidas, perguntas etc., bem como com provedores de serviços ou parceiros para gerenciar ou suportar certos aspectos de nossas operações comerciais em nosso nome. Esses provedores de serviços ou parceiros podem estar localizados nos Estados Unidos, na Argentina, no Brasil ou em outros locais globais, incluindo servidores para homologação e produção, e prestadores de serviços de hospedagem e armazenamento de dados, gerenciamento de fraudes, suporte ao cliente, vendas em nosso nome, atendimento de pedidos, personalização de conteúdo, atividades de publicidade e marketing (incluindo publicidade digital e personalizada) e serviços de TI, por exemplo;
- Com terceiros, com o objetivo de nos ajudar a gerenciar o site; e
- Com terceiros, caso ocorra qualquer reorganização, fusão, venda, joint venture, cessão, transmissão ou transferência de toda ou parte da nossa empresa, ativo ou capital (incluindo os relativos à falência ou processos semelhantes).

### Transferências internacionais de Dados

Dados Pessoais e informações de outras naturezas coletadas por nós podem ser transferidos ou acessados por entidades pertencentes ao grupo corporativo das empresas parceiras em todo o mundo de acordo com esta Política de Privacidade.

### Forma de coleta automática de Dados Pessoais

Quando você visita o site, ele pode armazenar ou recuperar informações em seu navegador, seja na forma de cookies e de outras tecnologias semelhantes. Essas informações podem ser sobre você, suas preferências ou seu dispositivo e são usadas principalmente para que o site funcione como você espera. As informações geralmente não o identificam diretamente, mas podem oferecer uma experiência na internet mais personalizada.

De acordo com esta Política de Privacidade, nós e nossos prestadores de serviços terceirizados podem coletar seus Dados Pessoais de diversas formas, incluindo, entre outros:

- Por meio do navegador ou do dispositivo: Algumas informações são coletadas pela maior parte dos navegadores ou automaticamente por meio de dispositivos de acesso à internet, como o tipo de computador, resolução da tela, nome e versão do sistema operacional, modelo e fabricante do dispositivo, idioma, tipo e versão do navegador de Internet que está utilizando. Podemos utilizar essas informações para assegurar que o site funcione adequadamente.
- Uso de cookies: Os cookies permitem a coleta de informações tais como o tipo de navegador, o tempo dispendido no site, as páginas visitadas, as preferências de idioma, e outros dados de tráfego anônimos. Nós e nossos prestadores de serviços podem utilizar essas informações para, dentre outros, personalizar sua experiência ao utilizar o site, assim como para direcionar publicidade para você, de acordo com os seus interesses. Também coletamos informações estatísticas sobre o uso do site para aprimoramento contínuo do nosso design e funcionalidade.

Caso não deseje que suas informações sejam coletadas por meio de cookies, você pode configurar os cookies no menu "opções" ou "preferências" do seu browser. Nos links abaixo você encontra mais detalhes sobre como ajustar as preferências de cookies dos navegadores de internet mais populares:

- [Google Chrome](https://support.google.com/chrome/answer/95647)
- [Mozilla Firefox](https://support.mozilla.org/en-US/kb/enable-and-disable-cookies-website-preferences)
- [Safari](https://support.apple.com/guide/safari/manage-cookies-and-website-data-sfri11471/mac)
- [Internet Explorer](https://support.microsoft.com/en-us/help/17442/windows-internet-explorer-delete-manage-cookies)
- [Microsoft Edge](https://support.microsoft.com/en-us/microsoft-edge/delete-cookies-in-microsoft-edge-63947406-40ac-c3b8-57b9-2a946a29ae09)
- [Opera](https://help.opera.com/en/latest/web-preferences/#cookies)

Caso deseje saber um pouco mais sobre os cookies de publicidade e remarketing, que servem para direcionarmos publicidade em função dos interesses de cada usuário e do número de visitas que realizou em nosso site e suas buscas na internet, acesse:

- [Facebook](https://www.facebook.com/policies/cookies/)
- [Google](https://policies.google.com/technologies/ads)
- [Bing](https://about.ads.microsoft.com/en-us/resources/policies/personalized-ads)

### Uso de pixel tags e outras tecnologias similares

Pixel tags (também conhecidos como Web beacons e GIFs invisíveis) podem ser utilizados para rastrear ações de usuários do site (incluindo destinatários de e-mails), medir o sucesso das nossas campanhas de marketing e coletar dados estatísticos sobre o uso do site e taxas de resposta. Em caso de ter ativa a personalização de anúncios em ferramentas como Facebook, Google ou Bing, a informação pode ser usada para mostrar anúncios em seus serviços. Não nos responsabilizamos na coleta de dados de cada site.

- [Facebook](https://www.facebook.com/policies/cookies/)
- [Google](https://policies.google.com/technologies/ads)
- [Bing](https://about.ads.microsoft.com/en-us/resources/policies/personalized-ads)

Podemos contratar empresas de publicidade comportamental, para obter relatórios sobre os anúncios do site em toda a internet. Para isso, essas empresas utilizam cookies, pixel tags e outras tecnologias para coletar informações sobre a sua utilização, ou sobre a utilização de outros usuários, do nosso site e de site de terceiros. Nós não somos responsáveis por pixel tags, cookies e outras tecnologias similares utilizadas por terceiros. Você pode configurar suas preferências no menu do seu browser. Esteja ciente de que se você mudar de computador ou navegador, ou usar vários computadores ou navegadores, você precisará repetir este processo para cada computador e cada navegador.

### Direitos do Usuário

Você pode, a qualquer momento, requerer: (i) confirmação de que seus Dados Pessoais estão sendo tratados; (ii) acesso aos seus Dados Pessoais; (iii) correções a dados incompletos, inexatos ou desatualizados; (iv) anonimização, bloqueio ou eliminação de dados desnecessários, excessivos ou tratados em desconformidade com o disposto em lei; (v) portabilidade de Dados Pessoais a outro prestador de serviços, contanto que isso não afete nossos segredos industriais e comerciais; (vi) eliminação de Dados Pessoais tratados com seu consentimento, na medida do permitido em lei; (vii) informações sobre as entidades às quais seus Dados Pessoais tenham sido compartilhados; (viii) informações sobre a possibilidade de não fornecer o consentimento e sobre as consequências da negativa; e (ix) revogação do consentimento. Os seus pedidos serão tratados com especial cuidado de forma a que possamos assegurar a eficácia dos seus direitos. Poderá lhe ser pedido que faça prova da sua identidade de modo a assegurar que a partilha dos Dados Pessoais é apenas feita com o seu titular.

Você deverá ter em mente que, em certos casos (por exemplo, devido a requisitos legais), o seu pedido poderá não ser imediatamente satisfeito, além de que nós poderemos não conseguir atendê-lo por conta de cumprimento de obrigações legais.

### Segurança dos Dados Pessoais

Buscamos adotar as medidas técnicas e organizacionais previstas pelas Leis de Proteção de Dados adequadas para proteção dos Dados Pessoais na nossa organização. Infelizmente, nenhuma transmissão ou sistema de armazenamento de dados tem a garantia de serem 100% seguros. Caso tenha motivos para acreditar que sua interação conosco tenha deixado de ser segura (por exemplo, caso acredite que a segurança de qualquer uma de suas contas foi comprometida), favor nos notificar imediatamente.

### Links de hipertexto para outros sites e redes sociais

O site poderá, de tempos a tempos, conter links de hipertexto que redirecionará você para sites das redes dos nossos parceiros, anunciantes, fornecedores etc. Se você clicar em um desses links para qualquer um desses sites, lembramos que cada site possui as suas próprias práticas de privacidade e que não somos responsáveis por essas políticas. Consulte as referidas políticas antes de enviar quaisquer Dados Pessoais para esses sites.

Não nos responsabilizamos pelas políticas e práticas de coleta, uso e divulgação (incluindo práticas de proteção de dados) de outras organizações, tais como Facebook, Apple, Google, Microsoft, ou de qualquer outro desenvolvedor de software ou provedor de aplicativo, site de mídia social, sistema operacional, prestador de serviços de internet sem fio ou fabricante de dispositivos, incluindo todos os Dados Pessoais que divulgar para outras organizações por meio dos aplicativos, site de mídia social ou de outro modo.

### Crianças

Os serviços do site  não se destinam a menores de 18 anos. Não coletamos intencionalmente informações de crianças menores de 18 anos.

### Alterações na Política de Privacidade

De tempos em tempos, poderemos atualizar esta Política de Privacidade. A última revisão será sempre indicada na parte superior do documento, na primeira linha, com a indicação da data. A data da última revisão é mencionada no início da Política de Privacidade. Ao continuar a utilizar o site, você declara sua concordância com a Política de Privacidade atualizada. Recomendamos que você reveja a Política de Privacidade toda vez que visitar o site para estar ciente de como os Dados Pessoais são tratados.

### Como nos contatar

Qualquer dúvida em relação a esta Política de Privacidade e ao uso de seus Dados Pessoais no site, as práticas aqui descritas, e as suas relações com o site, você pode entrar em contato com [sd@rnp.br](mailto:sd@rnp.br).

### Atualização de políticas

Ao navegar no site, você aceita e concorda com as práticas descritas nesta Política de Privacidade, que são atualizadas de tempos em tempos. Nós não processamos Dados Pessoais em desacordo com esta Política de Privacidade. Também, o site não está configurada para responder a "sinais de não rastreamento" recebidos de navegadores. Caso você tenha alguma dúvida em relação a esta Política de Privacidade, favor enviar e-mail para [sd@rnp.br](mailto:sd@rnp.br).


### 3.1.7. Bill of Material (BOM)

&emsp; Uma parte essencial de qualquer projeto bem-sucedido é a organização e a seleção cuidadosa dos materiais a serem utilizados. A lista de materiais não apenas fornece uma visão geral dos recursos necessários, mas também serve como um guia fundamental para a execução eficiente do projeto. Através desta lista, planejamos e alocamos recursos, controlamos orçamentos e garantimos que todas as etapas do projeto sejam realizadas de forma consistente e precisa.

&emsp; Esta lista de materiais é projetada para fornecer uma visão detalhada dos recursos e componentes necessários para a realização do seu projeto. Incluímos descrições dos materiais, quantidades, fornecedores potenciais e outras informações relevantes que o ajudarão a manter o controle de todos os aspectos essenciais.


<h6 align="center"> Figura 4:  Lista de Materiais utilizados no projeto </h6>

<div align="center">
	
![BOM](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/Bill%20Of%20Material%20(BOM).png)
</div>

<h6 align="center"> Fonte: Elaborado pelos autores </h6>

&emsp; Por fim, faremos uma descrição breve de como usaremos os componentes listados a cima:

1. **Arduino UNO R3:** Usaremos este micro controlador para introduzir as linhas de comando e usar em paralelo com outro micro controlador, o ESP 32, para manusear melhor o Módulo GPS e começar a prototipação do MVP.

2. **Cabo USB para Arduino UNO:** Além de fornecer energia, usaremos para introduzir a programação no Arduino UNO.

3. **Display LCD 16x2:** Vamos usar este display para mostrar as informações do GPS, como a latitude e longitude. Vamos usar o Arduino UNO em paralelo com o ESP32 para fazer a comunicação entre o display e o módulo GPS.

4. **ESP32 Bluetooth e WiFi:** Usaremos este micro controlador para fazer a comunicação entre o display e o módulo GPS. Partindo das informações coletadas pelo ESP32 e plotadas no display, podemos começar a introduzir essas informações em um banco de dados e mostrar em uma interface amigável para o usuário.

5. **Antena WiFi 2.4ghz:** A antena sera para o ESP32 para ter mais alcance e auxiliar na conectividade do micro controlador.

6. **Fio Macho-Macho e Macho-Femea:** Usaremos os fios para fazer a conexão entre os componentes.

7. **Resistor 1K Ohm** Usaremos para baixar a corrente entre o arduino e o Módulo GPS

8. **Resistor 2.2K Ohm:** Também usaremos para baixar a corrente entre o arduino e o Módulo GPS

9. **Protoboard:** Usaremos para fazer a conexão entre os componentes.

10. **Módulo GPS NEO-6M:** Usaremos este módulo para coletar as informações de localização (latitude e longitude) e tempo. Para que o GPS possa ser utilizado da forma correta, vamos utilizar o Arduino UNO em paralelo com o ESP32 para fazer a comunicação com o mesmo.

### 3.1.8 5 Forças de Porter

&emsp;&emsp;A Matriz 5 Forças ajuda a ver quem são nossos concorrentes, o poder dos nossos clientes e fornecedores, e se há novidades no horizonte que podem mudar o jogo. Esta ferramenta, além de mapear os competidores diretos, nos permite ter uma visão mais ampla do ambiente em que estamos inseridos, identificando potenciais ameaças e oportunidades que podem não ser imediatamente óbvias.

![5_Forças](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/5_For%C3%A7as_de_Porter_RNP.png)

&emsp;**Ameaça de novos concorrentes: Moderada**
- Embora a RNP tenha uma vantagem significativa como uma rede estabelecida e reconhecida pelo governo, a possibilidade de novas redes de ensino e pesquisa emergirem representa uma ameaça moderada. A constante evolução tecnológica e a demanda por inovação no campo das tecnologias de comunicação requerem atenção contínua para manter a posição competitiva da RNP.

&emsp;**Poder de negociação dos fornecedores: Moderada**
- A vinculação da RNP a vários ministérios e secretarias proporciona uma vantagem em termos de negociações com fornecedores. No entanto, a dependência de tecnologias específicas e infraestrutura pode limitar sua flexibilidade. O equilíbrio entre vantagens de negociação e dependência tecnológica torna a ameaça moderada.

&emsp;**Poder de negociação dos compradores: Alta**
- Devido ao papel crucial das instituições educacionais e de pesquisa na demanda por serviços de rede avançados, a RNP enfrenta uma alta pressão para atender às necessidades específicas dos compradores. A diversidade de compradores e suas demandas específicas aumenta a complexidade e a dificuldade de atender a todos de maneira eficiente.

&emsp;**Ameaça de produtos ou serviços substitutos: Alta**
- A constante evolução da tecnologia de comunicação e colaboração cria uma ameaça significativa de substituição para os serviços oferecidos pela RNP. A necessidade de permanecer atualizada com as novas tecnologias emergentes e garantir a relevância e inovação contínuas para enfrentar essa ameaça é alta.

&emsp;**Rivalidade entre os concorrentes existentes: Baixa**
- Embora a rivalidade direta possa ser baixa devido à posição estabelecida da RNP, a pressão competitiva indireta proveniente da necessidade de inovação contínua para atender às demandas da comunidade acadêmica cria um nível de ameaça moderado. No entanto, a colaboração com outras redes de pesquisa e educação pode, de certa forma, mitigar essa pressão. Como as empresas abaixo

&emsp;**Serviços de Internet segura e de alta capacidade:**
- Claro: Oferece serviços abrangentes de internet segura e de alta capacidade para várias instituições, com uma rede estável e ampla cobertura em todo o país.
- Vivo: Conhecida por suas soluções robustas de internet segura e de alta capacidade.
- Oi: Fornecedora de serviços de internet segura e de alta capacidade, com um enfoque especial na personalização de soluções para clientes institucionais.

&emsp;**Serviços Personalizados:**
- Google Meet: Oferece serviços de comunicação e colaboração altamente personalizados, com foco na eficiência e facilidade de uso para instituições educacionais e de pesquisa.
- Zoom: Concorrente direto do Google Meet, conhecido por sua plataforma de comunicação personalizada e recursos avançados de colaboração, adequados para diferentes contextos acadêmicos.
- Microsoft Teams: Oferece soluções personalizadas de comunicação e colaboração, adaptadas para atender às necessidades específicas das instituições educacionais e de pesquisa.

&emsp;**Promoção de Projetos e Inovação:**
- IPT (Instituto de Pesquisas Tecnológicas): Reconhecido por impulsionar a inovação em vários setores por meio de parcerias estratégicas e projetos de pesquisa de ponta.
- Instituto Butantan: Líder em pesquisa e um dos principais órgãos brasileiros em seu campo.
- Boa Vista: Contribui ativamente para a inovação e o desenvolvimento tecnológico.

##
&emsp;&emsp;A partir da análise das Cinco Forças de Porter para a RNP, podemos concluir que o equilíbrio entre as diversas forças competitivas molda significativamente o ambiente estratégico da organização. A ameaça moderada de novos concorrentes e a alta pressão tanto do poder de negociação dos compradores quanto dos produtos substitutos destacam a necessidade constante de inovação e adaptação. A abordagem das Cinco Forças de Porter é vital para entender o cenário competitivo e guiar a formulação de estratégias eficazes que estejam alinhadas com os desafios e oportunidades do mercado.

## 3.2. Domínio de Fundamentos de Experiência de Usuário 
&emsp;&emsp;Neste tópico serão abordados personas, jornada do usuário, storyboard, user stories, protótipo de usuário de interface do usuário e documentação do site.
### 3.2.1. Personas

&emsp; O processo de modelagem das personas iniciou-se com a definição dos stakeholders. Para tal feito, pensou-se em quem seria afetado de forma direta e indiretamente pelo projeto que está sendo desenvolvido. Assim, foi possível chegar na seguinte lista:

- RNP: Cliente
- Personas: Pessoas que apresentam as dores que o nosso projeto vai tentar mitigar (Técnico de instalação; Gestor da Universidade UFRJ; Gerente de Logística);
- Stakeholders: Investidores que financiam os projetos e que são afetados de forma direta e indireta pelo projeto;
- Inteli: A faculdade, que está interessada no desenvolvimento das soluções;
- GP5: Nosso grupo de desenvolvedores, que vai construir uma soluçaõ para a empresa.

&emsp; Apesar das partes mencionadas serem impactadas com o desenvolvimento desse projeto, é importante definir quem representará as personas. Dessa forma, será possível entender e mapear as dores que os usuários diretos e indiretos tem em relação ao produto, levando à construção de uma solução que impacte, de fato, a empresa RNP em relação aos ativos que ela possui.

&emsp; A primeira persona chama-se Valmir dos Santos, de 54 anos, cursou bacharel em Engenharia Elétrica na Universidade Ferderal do Rio de Janeiro (UFRJ), atualmente se enencontra na função de gestor na universidade em que se formou, a UFRJ. Ele conheceu a RNP quando notou que os cabeamentos de conectividade que forneciam internet para a universidade estavam ruins, muitos deles estavam bem antigos e viu que havia uma empresa especializada nesse ramo que tem como principal cliente o governo, a RNP. Suas princpais dores são que alguns equipamentos instalados na faculdade pela RNP apresentam problemas de conectividade com frequência e a falta de manual de instruções impede que esses problemas sejam resolvidos de forma fácil. Com base nisso, foi possível estruturar a persona fisicamente, como pode ser visto abaixo.

<h6 align="center"> Figura 05 - Persona: Valmir dos Santos </h6>

<div align="center">
	
![Persona_Valmir](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/Persona_Valmir.PNG)
</div>

<h6 align="center"> Fonte: Elaborado pelos autores </h6>

&emsp; A segunda persona é João de Mello, de 34 ano e se formou como técnico em mecatrônica no SENAI Santos Dummont em São José dos Campos. Ele trabalha como técnico de instalações na empresa RNP desde 2020, antes do começo da pandemia quando a RNP teve que investir mais em redes de telecomunicações e roteadores de interner. Sua dor gira entorno de não conseguir efetivamente inventariar todos os ativos, suas respectivas características, localização e quantidade, afetando no tempo de entrega do serviço e dificultando na logística de manutenção dos materiais. Sua representação visual esta abaixo.

<h6 align="center"> Figura 06 - Persona: Joao de Mello </h6>
<div align="center">
	
![Persona_Joao](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/Persona_Joao.PNG)
</div>

<h6 align="center"> Fonte: Elaborado pelos autores </h6>

&emsp; Por fim, a Elisa Peixoto representa a terceira persona. Ela tem 33 anos e é Gerente de Logística na RNP, mas iniciou sua carreira auxiliando na logística de compra e venda das Casas Bahia, cursou Administração da Faculdade de Economia e Administração na USP, a FEA. Suas dores estão relacionadas em ser muito rígida com seus ideais e preferir trabalhar com pessoas com os mesmos pensamento que ela e a outra dor que é apresentada é que ela se sente muito pressionada para entregar tudo no prazo estimado e com o mínimo de perdas. Arepresentação visual da persona pode ser visto abaixo.

<h6 align="center"> Figura 7 - Persona: Elisa Peixoto </h6>
<div align="center">
	
![Persona_Elisa](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/Persona_Elisa.PNG)
</div>

<h6 align="center"> Fonte: Elaborado pelos autores </h6>

### 3.2.2. Jornadas do Usuário e Storyboard


&emsp;&emsp; Neste segmento, abordaremos o conceito de mapa de jornada do usuário, o qual se trata de uma representação visual das etapas percorridas por um usuário ao interagir com uma plataforma, enfatizando as emoções e ações que o usuário experimenta durante essa interação. Este recurso é útil para detectar áreas passíveis de aprimoramento e para compreender os desafios enfrentados pelo usuário. Abaixo, apresentaremos o mapa de jornada de Elisa Peixoto, na sua função de gerente de logística na RNP.

<h6 align="center"> Figura 8:  Mapa de Jornada do Usuário Elisa </h6>

<div align="center">
	
![Jornada_Usuario](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/jornada_do_usuario.jpeg)
</div>


&emsp;&emsp; O storyboard é uma ferramente de planejamento que pode ser aplicada em diversos projetos. Ele consiste em uma série de ações desenhadas e explicadas em quadrinhos, servindo como um guia visual, que ajuda a estruturar e comunicar de forma eficaz a funcionalidade do produto e como ele contribuirá para o cliente. Abaixo temos dois exemplos dessa ferramenta aplicada em nosso projeto visando demostrar a utilidade de nosso produto para a RNP.

<h6 align="center"> Figura 9:  Storyboard Elisa </h6>

<div align="center">
	
![Story_Elisa](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/StoryElisa_RNP.png)
</div>

<h6 align="center"> Fonte: Elaborado pelos autores </h6>

&emsp;&emsp; Explicando a storyboard da Elisa com o decorer dos quadrinhos:

1. Primeiro quadrinho (superior esquerdo): Uma mulher chamada Elisa está procurando informações sobre ativos em seu local de trabalho, mas está tendo dificuldade devido à desorganização, com papéis e dados espalhados.

2. Segundo quadrinho (superior central): Elisa parece estressada porque precisa entregar um relatório até o final da semana, e a desorganização está atrasando seu progresso.

3. Terceiro quadrinho (superior direito): Elisa decide usar um aplicativo para concluir seu relatório, indicando uma solução digital para seu problema.

4. Quarto quadrinho (inferior esquerdo): O aplicativo parece ter uma interface organizada que ajuda Elisa a gerenciar as informações de forma mais eficiente.

5. Quinto quadrinho (inferior central): O quadrinho mostra uma comparação do antes e depois da adoção do aplicativo, destacando que, antes, Elisa não tinha acesso em tempo real aos ativos e tinha dificuldade de comunicação, mas agora ela pode se comunicar sem delongas.

6. Sexto quadrinho (inferior direito): Com a ajuda do aplicativo, a busca por informações é mais fácil e prática, melhorando a localização e o histórico dos ativos, o que facilita a vida de Elisa no trabalho.

&emsp;&emsp; Em resumo, a história nos quadrinhos mostra como a tecnologia pode transformar a desorganização e a ineficiência em um processo de trabalho mais organizado e eficiente, através de uma solução de aplicativo.

<h6 align="center"> Figura 10:  Storyboard João </h6>

<div align="center">
	
![Story_João](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/StoryJoao_RNP.png)
</div>

<h6 align="center"> Fonte: Elaborado pelos autores </h6>

&emsp;&emsp; Explicando a storyboard do João com o decorer dos quadrinhos:

1. Primeiro quadrinho (superior esquerdo): João precisa encontrar um equipamento específico para seu projeto, o Optix OSN 8800, e está pensativo sobre onde ele pode estar no estoque.

2. Segundo quadrinho (superior central): Ao chegar no estoque, João se depara com um espaço vasto e se dá conta de que levará uma tarde inteira procurando pelo dispositivo desejado, mostrando-se preocupado com o tamanho do desafio.

3. Terceiro quadrinho (superior direito): João se mostra aliviado por poder visualizar o conteúdo interno de cada caixa, sugerindo que ele tem um meio de verificar o estoque sem precisar abrir cada embalagem.

4. Quarto quadrinho (inferior esquerdo): João aperta um botão vermelho e consegue visualizar os conteúdos internos das caixas através de um display LCD, o que facilita a identificação do ativo que está procurando.

5. Quinto quadrinho (inferior central): João reflete sobre como a nova forma de visualizar os ativos economiza seu tempo e facilita a localização dos itens, mostrando-se satisfeito com essa melhoria no processo.

6. Sexto quadrinho (inferior direito): Não contém texto, mas sugere que, devido à nova tecnologia ou método de organização, o que antes era um longo processo para encontrar ativos agora se tornou muito mais fácil e rápido para João.

&emsp;&emsp; Em conjunto, os quadrinhos ilustram como uma solução tecnológica pode simplificar o processo de localização de itens em um grande estoque, economizando tempo e aumentando a eficiência.

### 3.2.3. User Stories

&emsp;&emsp;As "User Stories" são uma técnica adotada em metodologias ágeis, no nosso caso o Scrum, para capturar requisitos de software a partir da perspectiva do usuário. Elas servem como uma breve declaração das necessidades do usuário, permitindo que nossa equipe mantenha o foco nas nescessidades reais dos usuários.

1- "Eu, João, como técnico em mecatrônica responsável por parte da logística, quero saber a localização dos ativos precisa e rapidamente para poder usar no meu dia a dia." Critério de aceitação: O protótipo envia sinais para um dashboard relatando onde está e suas recentes movimentações. Nível de prioridade organizado de 1 à 5 = 5 Estimativa de esforço: Alta

2- "Eu, João, como técnico em mecatrônica responsável por parte da logística, quero fazer a categorização dos ativos de forma mais fácil." Critério de aceitação: O protótipo relata qual é o dispositivo no qual ele está acoplado. Nível de prioridade organizado de 1 à 5 = 2 Estimativa de esforço: Baixa

3- "Eu, Elisa Peixoto, como gerente de logística, quero diminuir os custos de manutenção dos ativos." Critério de aceitação: O protótipo informa a data que o aparelho foi instalado e sua vida útil projetada Nível de prioridade organizado de 1 à 5 = 1 Estimativa de esforço: Média

4- "Eu, Elisa Peixoto, como gerente de logística, quero montar as estruturas dependentes de ativos com mais rapidez." Critério de aceitação: O protótipo oferece uma taxa de atualização de no maximo 24 horas para a localização de ativos em transporte. Nível de prioridade organizado de 1 à 5 = 3 Estimativa de esforço: Alta

5- "Eu, Elisa Peixoto, como gerente de logística, quero utilizar uma interface simples que me poupe tempo." Critério de aceitação: O protótipo apresenta um design intuitivo e uma curva de aprendizado curta, permitindo operações básicas em no máximo três cliques. Nível de prioridade organizado de 1 à 5 = 4 Estimativa de esforço: Alta

6- "Eu, João, como técnico em mecatrônica responsável por parte da logística, quero saber quais ativos estão dentro das caixas que se localizão dentro do estoque." Critério de aceitação: O protótipo relata qual é o dispositivo que está dentro da caixa do estoque quando o botão é acionado. Nível de prioridade organizado de 1 à 5 = 3 Estimativa de esforço: Média

7- "Eu, João, como técnico em mecatrônica responsável por parte da logística e pela parte de recebimento e envio de ativos, gostaria de saber como que eu poderia iniciar a viagem do ativo através do site e consultar quais ativos ja foram enviados e para quais destinos." Critério de aceitação: O site mostra para onde o ativo está indo e depois que a viagem for concluida, conseguir ver o histórico da viagem, os pontos que o GPS pingou no mapa, data da entrega e a data que saiu para a entrega. Nível de prioridade organizado de 1 à 5 = 5 Estimativa de esforço: Alta
##
&emsp;&emsp;Em suma, as User Stories são fundamentais para guiar o desenvolvimento de um produto de forma que ele seja verdadeiramente centrado no usuário, garantindo que o resultado seja prático, intuitivo e eficaz na solução dos problemas reais enfrentados pelos usuários no seu cotidiano profissional.
### 3.2.4. Protótipo de interface com o usuário

##### Desenho Esquemático

&emsp;&emsp; Em primeiro lugar, o desenho esquemático é uma representação visual simplificada usada para comunicar informações de maneira clara e concisa.Com isso, é possível ter uma visão geral do projeto e de como ele será implementado. Abaixo, temos o desenho esquemático do nosso projeto levando em consideração a storyboard e uma das user stories de (João de Mello).

<h6 align="center"> Figura 11 - Desenho Esquemático da solução </h6>
<div align="center">
	
![Desenho_Esquemático](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/desenho_esquem%C3%A1tico.png)
</div>

<h6 align="center"> Fonte: Elaborado pelos autores </h6>

&emsp;&emsp; Com o desenho esquemático, conseguimos sanar uma necessidade que João apresentava em uma das user stories, que era a de saber qual ativo estava dentro da caixa do estoque. Com isso, conseguimos ter uma visão geral de como o projeto será implementado e como ele vai funcionar. E podemos destacar que é um funcionamento bem simples onde o usuário aperta um botão e o protótipo informa através da mensagem no LCD qual ativo está dentro da caixa do estoque e nessa hora o led vermelho apaga e o led verde acende informando que a mensagem está sendo mostrada no LCD e depois de 5 segundos o LCD apaga, o led verde apaga e o led vermelho acende novamente mostrando que está pronto para ser acionado novamente.

##### Wireframe

&emsp;&emsp; Já o wireframe também é uma representação visual simplificada só que de um design ou interface, destacando a estrutura e layout sem incluir detalhes visuais. É considerada uma ótima ferramenta de design para esboçar a disposição de elementos e organizar a informação antes da implementação visual. 
&emsp;&emsp; Nesse wireframe, focamos em aplicar os princípios de design de interface, com o objetivo de entender como que um funcionário da logística da RNP (storyboard da Elisa Peixoto) veria a interface do nosso aplicativo passando pela parte de login, parte de selecionar a cidade de partida e a cidade de destino, o ativo também. Abaixo, temos o wireframe sendo apresentado em etapas.

<h6 align="center"> Figura 12 - Wireframe 1ª parte (tela de login) </h6>
<div align="center">
	
![Wireframe](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/wireframe_p1.png)
</div>

<h6 align="center"> Fonte: Elaborado pelos autores </h6>

&emsp;&emsp; Nessa primeira parte temos a tela de login, onde o usuário irá inserir seu e-mail e senha para ter acesso ao sistema e ver como estão os ativos que estão em transporte.

<h6 align="center"> Figura 13 - Wireframe 2ª parte (tela de home e botão de iniciar viagem pressionado) </h6>
<div align="center">
	
![Wireframe](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/wireframe_p2.png)
</div>

<h6 align="center"> Fonte: Elaborado pelos autores </h6>

&emsp;&emsp; Na segunda parte nós vemos a tela de home ja com uma cidade de partida e uma cidade de destino selecionadas, além de um ativo. Nessa tela o usuário pode ver a localização do ativo, a rota do ativo, e o QR code do ativo é liberado para quando for finalizar a viagem. Tudo isso acontece quando ja fizemos as seleções da cidade de partida, cidade de destino e ativo e clicamos em iniciar a viagem.

<h6 align="center"> Figura 14 - Wireframe 3ª parte (tela de home e botão de finalizar viagem pressionado) </h6>
<div align="center">
	
![Wireframe](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/wireframe_p3.png)
</div>

<h6 align="center"> Fonte: Elaborado pelos autores </h6>

&emsp;&emsp; Na terceira parte vemos que o ativo ja está em viagem e o botão de finalizar viagem está disponível para ser pressionado. Quando o botão de finalizar viagem é pressionado, o QR code do ativo é liberado para ser escaneado e a viagem é finalizada. Com essa ação, o mapa é limpo e os dados dos ativos são enviados para o banco de dados e mostrados para o usuário como o início e término da viagem e de onde saiu e para onde foi o ativo. 

<h6 align="center"> Figura 15 - Wireframe 4ª parte (Histórico de viagens filtrado por data) </h6>
<div align="center">
	
![Wireframe](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/wireframe_p4.png)
</div>

<h6 align="center"> Fonte: Elaborado pelos autores </h6>

&emsp;&emsp; Na quarta parte vemos o histórico de viagens utilizando para a pesquisa o filtro de datas em que o ativo chegou em determinada região.

&emsp;&emsp; Finalmente, por meio dessas representações de Wireframe e Desenho Esquemático, conseguimos compreender com as informações fornecidas pelo wireframe que o usuário consegue ter uma visão geral de como está o transporte dos ativos, além de ter um histórico de viagens para saber onde o ativo esteve e quando ele chegou em determinado local.


# 3.2.5. Documentação do Site
###### Esta seção informa tudo relacionado a docuemntação do site

### 3.2.5.1. Introdução
###### Esta seção informa do que se trata o site e como ele foi produzido.

#### Objetivo do Projeto
"A Rede Nacional de Ensino e Pesquisa (RNP), uma entidade brasileira voltada para tecnologia na educação e pesquisa, enfrenta desafios na gestão e visibilidade de seus ativos, resultando em desperdícios e ineficiências. Como solução, um projeto colaborativo foi desenvolvido com a Inteli, visando criar um protótipo que mapeia a localização dos ativos da RNP em todo o país. Através de uma interface API, este sistema busca melhorar a gestão de materiais, reduzir custos e otimizar os serviços oferecidos às instituições parceiras."

#### Escopo do Site
O site oferece funcionalidades essenciais para a gestão de ativos:
- **Registrar**: Adicionar novos ativos de maneira simplificada.
- **Localizar**: Rastrear a posição atual dos ativos.
- **Visualizar Viagens**: Monitorar rotas e atividades dos ativos.
- **Iniciar ou Finalizar Viagens**: Gerenciar ativos a serem localizados.

#### Arquitetura do Site
<h6 align="center"> Figura 16: Diagrama do site (Gerar qr code, iniciar viagem e localizar viagem)  </h6>

<div align="center">
	
![Diagrama do site](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/ModelagemSite1.png)
</div>

<h6 align="center"> Fonte: Elaborado pelos autores </h6>

##### Seta número 1: 
Na Página inicial, o botão “Registrar Ativo” foi clicado, Assim a pagina de “Registrar Novo Ativo” foi aberta.
##### Seta número 2: 
Na Página Registrar Ativo, o botão “Gerar QR code” foi clicado, o QR code foi gerado e assim a pagina de “Começar Viagem” com o ativo registrado foi criada.
##### Seta número 3: 
Na Página “Selecionar Viagem”, os filtros foram preenchidos e o botão de “Buscar” foi clicado, Assim todas as viagens que o ativo fez serão mostradas.
##### Seta número 4: 
Na Página “Selecionar Viagem”, as viagens do ativo foram apresentadas e o botão “Abrir Mapa” foi clicado e o mapa apareceu na mesma pagina.


<h6 align="center"> Figura 17: Diagrama do site (Finalizar viagem)  </h6>

<div align="center">
	
![Diagrama do site](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/ModelagemSite2.png)
</div>

<h6 align="center"> Fonte: Elaborado pelos autores </h6>

##### Seta número 5:
Na pagina “Finalizar viagem”, os filtros foram preenchidos e o botão de “Buscar” foi clicado, Assim todas as viagens que o ativo fez serão mostradas.
##### Seta número 6: 
Na pagina “Finalizar viagem”, os filtros foram preenchidos e o botão de “Finalizar” foi clicado, Assim a viagem selecionada foi finalizada e a mensagem foi recebida.

Caso deseje ver melhor os Diagramas aqui tem o link do [Canva](https://www.canva.com/design/DAF3iCDUJag/rU7fyPeThnf_rX7SKtjssQ/edit?utm_content=DAF3iCDUJag&utm_campaign=designshare&utm_medium=link2&utm_source=sharebutton) (Link para o diagrama do site) 


#### Tecnologia Utilizada
Para o desenvolvimento do site, utilizamos HTML e CSS para o frontend, e JavaScript para o backend. O banco de dados foi implementado com SQLite.

#### Integração com IoT
Empregamos o protocolo MQTT e a linguagem C++ para integrar nosso protótipo IoT.

####  Funcionalidades do Site
###### Seção destinada para a funcionalidade do site 

#### Registrar: Adicionar Novos Ativos de Maneira Simplificada
Esta funcionalidade permite aos usuários adicionar novos ativos ao sistema de forma intuitiva e eficiente. Ao acessar a seção de registro, o usuário pode inserir informações essenciais sobre o ativo, como identificação, tipo, e detalhes específicos relacionados ao seu uso ou localização. O processo é projetado para ser rápido e livre de complicações, garantindo que a inclusão de novos ativos no sistema seja uma tarefa simples, mesmo para usuários com conhecimento técnico limitado. Além disso, essa funcionalidade pode incluir a opção de atribuir tags ou categorias aos ativos para facilitar sua organização e rastreamento.

#### Localizar: Rastrear a Posição Atual dos Ativos
A funcionalidade de localização oferece aos usuários a capacidade de rastrear a posição atual de qualquer ativo registrado no sistema. Utilizando tecnologia de GPS e integração com dispositivos IoT, esta ferramenta proporciona uma visão em tempo real da localização exata de cada ativo. Isso é particularmente útil para a gestão de materiais em movimento ou em locais remotos, possibilitando uma visão abrangente e atualizada da distribuição dos ativos. Esta funcionalidade é essencial para a otimização logística, prevenção de perdas e planejamento eficiente de recursos.

#### Visualizar Viagens: Monitorar Rotas e Atividades dos Ativos
A seção de "Visualizar Viagens" no site permite aos usuários acompanhar as rotas percorridas pelos ativos e analisar suas atividades. Esta funcionalidade é particularmente valiosa para entender o uso e o deslocamento dos ativos ao longo do tempo. Os usuários podem visualizar históricos de viagens, incluindo detalhes como duração, distância percorrida, e rotas tomadas. Essas informações ajudam a identificar padrões de uso, otimizar rotas de transporte e melhorar a eficiência operacional. Além disso, essa funcionalidade pode incluir alertas ou notificações sobre eventos ou desvios significativos nas rotas dos ativos.

#### Iniciar ou Finalizar Viagens: Gerenciar Ativos a Serem Localizados
Esta funcionalidade permite que os usuários iniciem ou finalizem o rastreamento de viagens para ativos específicos. Ao 'iniciar uma viagem', o sistema começa a monitorar ativamente a localização e movimentação do ativo selecionado, fornecendo dados em tempo real. Isso é útil para rastrear ativos em trânsito ou em uso para operações específicas. Ao 'finalizar uma viagem', o sistema para de monitorar o ativo, registrando o fim de sua atividade. Esta ferramenta é crucial para gerenciar e documentar o uso dos ativos, assegurando que o rastreamento seja feito apenas quando necessário, otimizando assim o uso dos recursos de rastreamento e preservando a vida útil dos dispositivos IoT envolvidos.

#### Interface de Rastreamento de Ativos
Desenvolvemos um sistema de rastreamento com GPS que compartilha a localização dos ativos.

#### Relatórios e Análises
Nós fizemos testes do site dentro do Inteli e tivemos bons resultados, pudemos entender ajustes necessários que deveríamos fazer no site.

### 3.2.5.2. LGPD
###### Seção destinada para informaçoes da LGPD do site
#### Introdução
Este documento detalha a conformidade do site do Projeto IoTDoc, desenvolvido pela RNP, com a Lei Geral de Proteção de Dados (LGPD) do Brasil, garantindo transparência e comprometimento com a privacidade dos usuários.

#### Finalidade do Tratamento de Dados
O site tem como propósito a coleta e o uso de dados para monitorar e gerir os ativos da RNP, buscando otimizar a eficiência operacional e promover a economia de recursos.

#### Tipos de Dados Coletados
Coletamos dados essenciais para a operação, incluindo:
- Localização dos ativos.
- Informações detalhadas das viagens dos ativos.
- Data e hora de ativação do GPS.

#### Base Legal para o Tratamento de Dados
A base legal para o processamento de dados é o legítimo interesse da RNP em melhorar continuamente a gestão e eficiência de seus ativos, alinhado às normativas da LGPD.

#### Segurança dos Dados
Implementamos protocolos de segurança robustos para proteger os dados contra acessos não autorizados e outras ameaças, assegurando a integridade e a confidencialidade dos dados coletados.

#### Compartilhamento de Dados
O compartilhamento de dados é restrito a entidades parceiras confiáveis e ocorre sob rigorosos acordos de confidencialidade, apenas quando estritamente necessário para as operações.

#### Direitos dos Titulares dos Dados
Respeitamos integralmente os direitos dos titulares dos dados, oferecendo opções de acesso, correção, exclusão ou portabilidade dos seus dados pessoais. O consentimento para o uso dos dados pode ser revogado a qualquer momento.

#### Retenção de Dados
Retemos os dados somente pelo período necessário para atender aos propósitos de coleta, seguindo as diretrizes da LGPD.

#### Responsável pelo Tratamento de Dados
Nome: Enzo
Contato: Enzo.pagliara@sou.inteli.edu.br

#### Alterações na Política de Privacidade
Nos comprometemos a comunicar quaisquer alterações na política de privacidade de maneira clara e acessível aos usuários.

#### Contato
Para dúvidas ou solicitações referentes à LGPD, contate inteli@inteli.edu.br.

### 3.2.5.2.1 Gestão de Dados
###### Seção destinada à gestão de dados do site

#### Armazenamento e Acesso a Dados
Os dados coletados são armazenados de forma segura em nosso banco de dados e disponibilizados no GitHub. A seção “Viagens” do site permite que os usuários acessem facilmente todas as informações relevantes sobre suas viagens.

#### Retenção e Exclusão de Dados
Nossas políticas de retenção e exclusão de dados pessoais estão em estrita conformidade com as normas da LGPD, garantindo a proteção e o respeito à privacidade dos usuários.

### 3.2.5.2.2 Manutenção e Suporte
###### Seção destinada aos ajustes relacionados à LGPD

#### Atualizações do Sistema
As manutenções ou suportes necessários no site são realizados exclusivamente por administradores autorizados, mantendo a segurança e a integridade do sistema.

#### Suporte Técnico
Para suporte técnico, utilize o botão de ajuda, localizado no canto superior direito da página, identificado pelo símbolo “?”, ou contate-nos pelo email inteli@inteli.edu.br.



## 3.3. Solução Técnica	

Essa seção é dedicada à apresentação detalhada da Solução Técnica. Aqui, exploramos minuciosamente as especificações, arquitetura e os componentes que formam a espinha dorsal de nosso projeto. Esta seção serve como um guia abrangente para entender como cada elemento da solução trabalha em conjunto para atender às necessidades do usuário e aos objetivos do sistema.

### 3.3.1. Requisitos Funcionais

Nesta seção, abordaremos os Requisitos Funcionais do projeto, que são os principais componentes que determinam o que o sistema deve fazer. Incluem a coleta de dados, formatação de relatórios, conectividade e a plataforma de interação com o usuário. Cada requisito é projetado para garantir que o sistema seja eficaz na captação de informações relevantes, processamento desses dados e na apresentação de insights úteis para os usuários finais.

_**Coleta de Dados**_

- RF1: O protótipo deve captar a localização geografica dos ativos com data e hora.
- RF2 - O protótipo deve coletar dados detalhados sobre os ativos, incluindo informações como consumo de energia, temperatura, pressão e outras métricas relevantes para o processo de manutenção, dando uma visão clara do estado dos ativos.

_**Formatação**_

- RF3: O sistema deve gerar relatórios, como localização, manutenção preventiva e desempenho, fornecendo informações específicas, como histórico de manutenções, alertas de problemas, Lista de verificações de manutenção, Alertas para manutenção urgente, se detectados, Estatísticas de uso (horas de operação por dia/semana/mês), Recomendações para próximas manutenções (baseadas em quilometragem ou tempo), Duração da parada em locais específicos.
- RF4: O sistema deve apresentar dashboards com gráficos informativos, destacando o status dos ativos, dados de desempenho ao longo do tempo e tendências de manutenção, dados de latitude e longitude em um mapa, dados da trajetória do ativo, opções de filtragem de dados(ID do ativo, cidades ou data) permitindo uma análise completa e fácil compreensão do estado atual dos ativos.
- RF5: Cadastro, edição e remoção dos ativos na plataforma.

_**Conectividade**_

- RF6: O protótipo deve ser capaz de se conectar à rede Wi-Fi e GPS de forma contínua e precisa, permitindo a coleta contínua de dados dos ativos, independentemente da localização.

_**Plataforma Web e Identificação do Usuário**_

- RF7: Desenvolvimento de uma plataforma web para a visualização dos dados coletados.
- RF8: Sistema de login com uma chave de identificação de usuário permitindo mostrar conteúdos diferentes para usuários diferentes.

_**Requisitos Funcionais dentro de nossas User stories**_

"Eu, João, como técnico em mecatrônica responsável por parte da logística, quero saber a localização dos ativos precisa e rapidamente para poder usar no meu dia a dia."
   Requisitos Funcionais Relacionados:
   - RF1, RF2, RF6, RF7, RF8.

"Eu, Elisa Peixoto, como gerente de logística, quero diminuir os custos de manutenção dos ativos."
   Requisitos Funcionais Relacionados:
   - RF1, RF2, RF3, RF4, RF5, RF6, RF7, RF8.

   | Requisito | Peças | Necessidade | Descrição | 
|-----------|-------|-------------|-----------|
| RF1 | Módulo de GPS + ESP32 | Captar a localização geografica dos ativos com data e hora. | Durante uma viagem deve ser atualizado a cada hora. User stories 1,3 |
| RF2 | ESP32 + Módulo de GPS | Apresentar métricas relevantes para o processo de manutenção | O protótipo deve coletar dados detalhados sobre os ativos, incluindo informações como consumo de energia, temperatura, pressão e outras métricas relevantes para o processo de manutenção, dando uma visão clara do estado dos ativos. User stories 1,3 |
| RF3 | Aplicação web | Amostra de relatórios e dados relevantes  | O sistema deve gerar relatórios, como localização, manutenção preventiva e desempenho, fornecendo informações específicas, como histórico de manutenções, alertas de problemas, Lista de verificações de manutenção, Alertas para manutenção urgente, se detectados, Estatísticas de uso (horas de operação por dia/semana/mês), Recomendações para próximas manutenções (baseadas em quilometragem ou tempo), Duração da parada em locais específicos. User stories 3 |  
| RF4 | ESP32 | Amostra de gráficos | O sistema deve apresentar dashboards com gráficos informativos, destacando o status dos ativos, dados de desempenho ao longo do tempo e tendências de manutenção, dados de latitude e longitude em um mapa, dados da trajetória do ativo, opções de filtragem de dados(ID do ativo, cidades ou data) permitindo uma análise completa e fácil compreensão do estado atual dos ativos. User stories 3 |
| RF5 | Aplicação web | Facilidade em cadastrar e gerir ativos | Cadastro, edição e remoção dos ativos na plataforma. User stories 3 |
| RF6 | ESP32 | Coleta de dados | O protótipo deve ser capaz de se conectar à rede Wi-Fi e GPS de forma contínua e precisa, permitindo a coleta contínua de dados dos ativos, independentemente da localização. User stories 1,3| 
| RF7 | Aplicação web | Desenvolvimento de uma aplicação | Desenvolvimento de uma plataforma web para a visualização dos dados coletados. User stories 1,3|
| RF8 | Aplicação web | Login para facilidade em acesso de dados | Sistema de login com uma chave de identificação de usuário permitindo mostrar conteúdos diferentes para usuários diferentes. User stories 1,3|


### 3.3.2. Requisitos Não Funcionais

Esta seção foca nos Requisitos Não Funcionais, que estabelecem os padrões de operação do sistema. Eles incluem a capacidade do sistema de coletar e processar dados em tempo real, a usabilidade e a interface do usuário, a confiabilidade e disponibilidade do sistema, e sua escalabilidade e desempenho. Estes requisitos são fundamentais para garantir que o sistema não apenas atenda às suas funções básicas, mas também opere de maneira eficiente, confiável e escalável.

_**Coleta e Processamento de Dados em Tempo Real**_: 
- RNF1: O sistema deve ser capaz de coletar e processar os dados dos ativos em até 200 milissegundos, assegurando que as informações estejam constantemente atualizadas para os usuários.

- RNF2: O sistema deve avisar caso ocorram atrasos no envio dos dados.

_**Usabilidade e Interface do Usuário**_: 

- RNF3: A interface do usuário deve ser intuitiva e de fácil navegação, direcionada para os perfis de usuários esperados, como administradores e operadores. Isso garantirá que eles possam interagir facilmente com o sistema. A presença de um mapa interativo e uma área de cadastro de ativos deve ser implementada de forma a atender às necessidades específicas desses usuários, proporcionando uma experiência fluida e amigável durante a navegação e interação com a plataforma.

_**Confiabilidade e Disponibilidade**_: 

- RNF4: O sistema deve ser altamente confiável e estar disponível menos quando está em manutenção, garantindo pelo menos 90% de atividade com um downtime estimado de 9 horas, evitando tempos de inatividade que possam afetar as operações de monitoramento de ativos.

_**Escalabilidade e Desempenho**_: 
- RNF5: O sistema deve ser capaz de lidar com o volume de dados(em média 1000 gigabytes por mês) e usuários(em média 100) simultâneos, proporcional a solução, sem comprometer o desempenho ou a velocidade de processamento.

_**Ligando os requisitos não funcionais com nossas user stories**_: 
"Eu, João, como técnico em mecatrônica responsável por parte da logística, quero saber a localização dos ativos precisa e rapidamente para poder usar no meu dia a dia." Requisitos Não Funcionais Relacionados:
- RNF1, RNF2, RNF3, RNF4, RNF5

"Eu, João, como técnico em mecatrônica responsável por parte da logística, quero fazer a categorização dos ativos de forma mais fácil." Requisitos Não Funcionais Relacionados:
- RNF1, RNF3, RNF4, RNF5

"Eu, Elisa Peixoto, como gerente de logística, quero diminuir os custos de manutenção dos ativos." Requisitos Não Funcionais Relacionados:
- RNF1, RNF2, RNF3, RNF5

"Eu, Elisa Peixoto, como gerente de logística, quero utilizar uma interface simples que me poupe tempo." Requisitos Não Funcionais Relacionados:
- RNF2, RNF3, RNF5

| Requisito | Descrição | Tipo | RF | Testes |
|-----------|-----------|------|----|--------|
| RNF1 | O sistema deve ser capaz de coletar e processar os dados dos ativos em até 200 milissegundos | Performance | 1,5,7| Testes de performance e stress para garantir a velocidade de processamento |
| RNF2 | O sistema deve avisar caso ocorram atrasos no envio dos dados | Confiabilidade | 2,3,4,6 | Testes de monitoramento e alertas em condições de falha de rede |
| RNF3 | A interface do usuário deve ser intuitiva e de fácil navegação | Usabilidade |  | Testes de usabilidade com usuários finais para validar a experiência do usuário |
| RNF4 | O sistema deve ter disponibilidade de 90% fora dos períodos de manutenção | Disponibilidade | Todos | Testes de disponibilidade e monitoramento de uptime/downtime |
| RNF5 | O sistema deve lidar com 1000 GB de dados por mês e 100 usuários simultâneos sem comprometer performance | Capacidade | Todos  | Testes de carga para validar o manuseio de grandes volumes de dados e usuários simultâneos |


### 3.3.4. Arquitetura da Solução

Nesta seção, detalhamos a arquitetura da solução através de um diagrama que ilustra como os diversos componentes do sistema estão interligados. A arquitetura é projetada para suportar todos os requisitos funcionais e não funcionais, fornecendo uma visão clara de como cada parte do sistema contribui para o seu funcionamento geral. Esta visualização ajuda a entender a complexidade e a eficácia da solução proposta.

O diagrama de arquitetura do sistema é uma representação visual que ilustra a estrutura técnica da nossa solução. Ele descreve como os componentes-chave, como microcontroladores, sensores e atuadores, estão interconectados, demonstrando como nossa arquitetura suporta os requisitos funcionais e não funcionais do sistema. Este diagrama oferece uma visão instantânea da complexidade subjacente ao nosso sistema e é uma ferramenta valiosa para entender seu funcionamento.
![Diagrama de arquitetura](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/Diagrama_solucao.png)

Após entender o funcionamento do protótipo através da explicação imagética apresentada acima, pode-se visualizar o funcionamento do protótipo pela seguinte demonstração em vídeo: [Video arquitetura da solução](https://www.youtube.com/watch?v=VeeeaMBdnSE&ab_channel=Th%C3%A9oTosto)

### 3.3.5. Arquitetura do Protótipo

Nesta parte, exploramos a arquitetura do protótipo, detalhando os componentes individuais utilizados na construção do sistema. Cada componente é descrito juntamente com sua função específica no protótipo. Esta seção é essencial para entender como o protótipo foi construído e como cada parte contribui para o funcionamento geral do sistema.

No link disposto logo abaixo, temos o vídeo postado da arquitetura do projeto com a explicação detalhada de como foi feito e por que estamos usando os componentes que estão sendo listados na tabela logo abaixo do vídeo.
(https://youtu.be/yMctOc5dft4)
          



| **Componente**                                                | **Descrição**                                                                          | **Tipo**                |
|-----------------------------------------------------------|------------------------------------------------------------------------------------|---------------------|
| Resistor                                                   | Componente eletrônico para controlar o fluxo de corrente em um circuito elétrico. | Componente Eletrônico |
| Antena WiFi 2.4GHz 3dBi Cabo 15cm                         | Antena específica para conexões WiFi em frequência de 2.4GHz.                      | Componente Eletrônico |
| Fio Macho-Fêmea                                           | Cabo com extremidades de plugue macho e conector fêmea para conexões de circuito.  | Conector            |
| Fio Macho-Macho                                           | Cabo com extremidades de plugue macho em ambas as extremidades.                     | Conector            |
| Protoboard                                                | Placa utilizada para prototipagem e conexão temporária de componentes eletrônicos. | Placa de Prototipagem|
| Microcontrolador Placa DOIT ESP32 Bluetooth e WiFi         | Microcontrolador que suporta conexão Bluetooth e WiFi, como o ESP32.               | Microcontrolador    |
| Microcontrolador Módulo GPS GY-NEO6MV2 com Antena         | Módulo GPS com antena para determinação de localização.                             | Módulo GPS          |
| LCD Display 16x2 com Backlight Azul                       | Display de cristal líquido com capacidade para exibir 16 caracteres por 2 linhas.   | Display             |
| Cabo USB para ESP32                                       | Cabo específico para conexão USB ao microcontrolador ESP32.                          | Cabo de Conexão     |


### 3.3.6. Arquitetura Refinada da Solução

&emsp;&emsp;Nossa arquitetura foi atualizada visando a maior simplificação possível do protótipo sem perder suas funcionalidades principais, com isso a RNP pode implementar a solução o mais rápido possível e decidir se realmente faz sentido investir em um projeto mais caro.

![Arquitetura da solução refinada](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/Arquitetura%20final.png)

&emsp;&emsp;Nesse MVP tentamos ao máximo criar uma boa prova de conceito para RNP, acreditamos que um monitoramento do transporte pode trazer economias e uma melhor qualidade para os seus serviços e instigamos a RNP a desenvolver uma solução mais complexa tendo a nossa como base caso essa prova de conceito seja bem sucedida.

&emsp;&emsp;A arquitetura suporta os requisitos funcionais e não funcionais, pois ela cumpre as seguintes histórias de usuários linkadas com os seguintes requisitos :

- "Eu, João, como técnico em mecatrônica responsável por parte da logística, quero saber a localização dos ativos precisa e rapidamente para poder usar no meu dia a dia." Requisitos Funcionais Relacionados:

RF1, RF2, RF6, RF7, RF8.

- "Eu, Elisa Peixoto, como gerente de logística, quero diminuir os custos de manutenção dos ativos." Requisitos Funcionais Relacionados:

RF1, RF2, RF3, RF4, RF5, RF6, RF7, RF8.

- "Eu, João, como técnico em mecatrônica responsável por parte da logística, quero fazer a categorização dos ativos de forma mais fácil." Requisitos Não Funcionais Relacionados:

RNF1, RNF3, RNF4, RNF5.

- "Eu, Elisa Peixoto, como gerente de logística, quero utilizar uma interface simples que me poupe tempo." Requisitos Não Funcionais Relacionados:

RNF2, RNF3, RNF5.

[Vídeo arquitetura final](https://www.youtube.com/watch?v=mCktzQ60yg8&ab_channel=Th%C3%A9oTosto)
##

A Solução Técnica é essencial para entender o projeto, detalhando a arquitetura, os componentes e as funcionalidades do sistema. Ela conecta as necessidades dos usuários com as capacidades técnicas, destacando os Requisitos Funcionais e Não Funcionais. Com recursos visuais como diagramas e vídeos, a seção proporciona uma visão clara da solução, ressaltando sua eficiência e adaptabilidade. Esta abordagem integral é vital para a aplicabilidade e eficácia do projeto.

## 3.4. Resultados

### 3.4.1.Protótipo Inicial do Projeto usando o Simulador Wokwi

&emsp;&emsp; Nos links dispostos a seguir, te meos os projetos feitos no simulador WOKWI para que ficasse mais claro e efetivo o entendimento dos códigos e até mesmo da montagem do circuito elétrico.
Link para o código 1 do simulador:  https://wokwi.com/projects/379792919322149889<br>
Link para o código 2 do simulador:  https://wokwi.com/projects/379864476969818113

### Descrição do código 1: 

#### Materiais utilizados:

* ESP32
* Botão (conectado à porta 19)
* LED (conectado à porta 18 - led vermelho)
* LED (conectado à porta 21 - led verde)
* LCD 16x2 com interface I2C (conectado via protocolo I2C)
* Fios de conexão
* 3 Resistores (10K Ohm para o botão e 2 de 330 Ohm para os leds)

&emsp;&emsp; O código configura três pinos como entrada ou saída: ledPin(pino 18 - led vermelho), ledPin1(pino 21 - led verde) e buttonPin(pino 19 - botão verde).
Inicializa a comunicação serial com uma taxa de 9600 bps.
O loop principal começa lendo o estado do botão (conectado a buttonPin).
Se o botão for pressionado (estado HIGH), o código entra em um bloco condicional:
A variável status é definida como verdadeira.
O LED conectado a ledPin1 pisca em um padrão específico de HIGH/LOW com diferentes atrasos.
O LED em ledPin é ligado.
Uma mensagem "Captando Dados" é impressa no monitor serial.
Enquanto status for verdadeira, entra em um loop while:
O LED em ledPin1 é ligado.
Após um atraso de 5 segundos, a mensagem "Armazenando Dados" é impressa no monitor serial.
O LED em ledPin1 é desligado.
Após outro atraso de 5 segundos, o código volta ao início do loop while.

&emsp;&emsp; A missão principal que o código tem é de mostrar para o usuário que se o botão (representa o botão de início) for pressionado para iniciar o programa, depois que o programa for iniciado, o led vermelho é acionado (led vermelho representa que o programa está captando do GPS que vamos introduzir futuramente) enquanto o led verde fica piscando (led verde representa que o programa está armazenando dados e captando os pontos de latitude e longitude ). Pode-se ver os resultados no monitor serial do pontos armazenados pelo GPS quando o sinal do led verde piscar. O programa fica nesse loop até que o botão seja pressionado novamente, assim o programa é finalizado.

**#** | **Bloco** | **Componente de entrada** | **Leitura da entrada** | **Componente de saída** | **Leitura da saída** | **Descrição**
|----------|----------|----------|----------|----------|----------|----------|
|01|Emissor de sinal via led's e botão|micro controlador ESP32| loop | push button | acionado quando pressionado | quando acionado, led pisca emitindo sinais para o monitor serial
|02|Emissor de sinal via led e botão|micro controlador ESP32| botão | led vermelho | led ligado | com a entrada do botão, led vermelho é acionado simulando o GPS ligado
|03|Emissor de sinal via led e botão|micro controlador ESP32| botão | led verde | led piscando | com a entrada do botão, led verde fica piscando de 5 em 5 segundos armazenando dados no monitor serial
|04|Emissor de sinal via led e botão|micro controlador ESP32| botão | led vermelho | led desligado | com a entrada do botão, led vermelho é desligado simulando o GPS desligado

#### Situações possíveis de teste:

&emsp;&emsp; Observa-se os casos de sucesso em relação ao código 1, que são:
* Quando o botão é pressionado (buttonPin em estado HIGH), o código executa a sequência de acender LEDs e imprimir mensagens no monitor serial.
* Quando o botão é pressionado, a mensagem "Captando Dados" será impressa no monitor serial.
* Durante o loop while, a mensagem "Armazenando Dados" será impressa no monitor serial intercalada com os LEDs em ledPin1 piscando a cada 5 segundos.

&emsp;&emsp; Observa-se os casos de falha em relação ao código 1, que são:
* Se o loop while não for interrompido de alguma forma, ele se tornará um loop infinito.
* Se ocorrerem erros de sintaxe ou problemas de compilação, o código não será executado.
* Se houver algum problema na inicialização da comunicação serial, as mensagens no monitor serial não serão impressas corretamente.
* Se os LEDs não estiverem conectados corretamente ou estiverem com defeito, a saída visual não corresponderá à intenção do código.
* Se o botão não estiver conectado corretamente ou não funcionar, o código não será ativado.

&emsp;&emsp; Logo a baixo podemos ver o esquema elétrico do circuito que foi montado no simulador Wokwi.

<h6 align="center"> Figura 18 - Circuito 1: Led's e botão </h6>

<div align="center">
	
![Circuito_1](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/codigo_1.png)
</div>

<h6 align="center"> Fonte: Elaborado pelo grupo GP5 </h6>

&emsp;&emsp; Em resumo, o código implementa um sistema de captura e armazenamento de dados de GPS utilizando um ESP32, LEDs vermelho e verde, um botão e um LCD 16x2. Ao pressionar o botão, o programa inicia a captura, indicado pelo LED vermelho, enquanto o LED verde pisca durante a fase de armazenamento. Os resultados são exibidos no monitor serial. O ciclo continua até que o botão seja pressionado novamente, encerrando o programa. Essa abordagem proporciona uma interface visual clara para o usuário, facilitando a compreensão do processo em tempo real.

### Descrição do código 2:

#### Materiais utilizados:

* ESP32
* Botão (conectado à porta 19)
* LED (conectado à porta 18 - led vermelho)
* LCD 16x2 com interface I2C (conectado via protocolo I2C)
* Fios de conexão
* 2 Resistores (10K Ohm para o botão e 330 Ohm para o led)

&emsp;&emsp; O código utiliza a biblioteca "LiquidCrystal_I2C" para controlar o LCD 16x2 via interface I2C.
Um botão está conectado ao pino 19 e é usado para acionar a ação no programa.
Um LED está conectado ao pino 18.
Quando o programa é iniciado, o LCD exibe a mensagem "Clique para ver o material" em duas linhas.
O programa monitora o estado do botão no loop principal.
Quando o botão é pressionado (estado HIGH), a função exibirMaterial() é chamada.
A função exibirMaterial() limpa o LCD, exibe informações relacionadas ao "material" no LCD e envia "Botao pressionado" para o monitor serial.
Após 5 segundos, o LCD é limpo novamente e a mensagem original é exibida.

&emsp;&emsp; A missão principal que o código deseja transmitir é, na empresa RNP é possível que haja um estoque de seus ativos, possivelmente são muitos ativos e pode ocorrer dos mesmo se perderem no estoque se não forem dispostos nos lugares apropriados e inseridos no banco de dados da empresa. Partindo dessa problemática, o grupo GP5 cria esse sistema com o auxílio de um micro controlador (ESP32) e outros componentes (protoboard, led, botão, resistor e LCD) para simular o sistema de localização dos ativos em meio ao estoque. Quando o botão é pressionado, o operador do estoque pode observar qual o ativo que está ali e desde quando, também pode observar a localização do ativo no estoque e se o mesmo está em bom estado. E o led é acionado representando que as informações estão sendo mostradas no LCD e estão sendo armazenadas.

**#** | **Bloco** | **Componente de entrada** | **Leitura da entrada** | **Componente de saída** | **Leitura da saída** | **Descrição**
|----------|----------|----------|----------|----------|----------|----------|
|01|Visualização de dados via led's, botão e LCD|micro controlador ESP32| loop | push button | acionado quando pressionado | quando acionado, mostra informações no LCD e o led acende
|02|Visualização de dados via led's, botão e LCD|micro controlador ESP32| botão | led vermelho | led ligado | com a entrada do botão, led vermelho é acionado para mostrar que as informações estão sendo mostradas no LCD e estão sendo armazenadas
|03|Visualização de dados via led's, botão e LCD|micro controlador ESP32| botão | LCD | LCD mostrando mensagem | com a entrada do botão, o LCD troca a mensagem que estava plotada "Clique para ver o material" e exibe a nova mensagem que mostra qual é o ativo e a localização daquele lugar
|04|Visualização de dados via led's, botão e LCD|micro controlador ESP32| botão | LCD | LCD com mensagem padrão | depois de 5 segundos o led apaga e o LCD volta a mostrar a mensagem padrão "Clique para ver o material"

#### Situações possíveis de teste:

&emsp;&emsp; Observa-se os casos de sucesso em relação ao código 2, que são:
* Quando o botão é pressionado, o LCD exibirá informações sobre o "material" (por exemplo, "Roteador - Loc 1.1 Caixa B") e o monitor serial registrará "Botao pressionado". Após 5 segundos, o LCD será limpo e a mensagem original será restaurada.
* As informações do LCD são exibidas corretamente e gravadas no monitor serial para serem usadas posteriormente.

&emsp;&emsp; Observa-se os casos de falha em relação ao código 2, que são:
* Se o botão estiver com defeito ou mal conectado, o programa não responderá corretamente às pressões do botão.
* Se o LED estiver com defeito ou mal conectado, a indicação visual não funcionará.
* Se o LCD estiver com defeito ou mal conectado, a exibição de mensagens não funcionará corretamente.
* Se houver um problema na comunicação I2C entre o ESP32 e o LCD, o LCD não exibirá informações corretamente.

&emsp;&emsp; Logo a baixo podemo ver o esquema elétrico do circuito que foi montado no simulador Wokwi.

<h6 align="center"> Figura 19 - Circuito 2: Led, botão e LCD </h6>

<div align="center">
	
![Circuito_1](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/codigo_2.png)
</div>

<h6 align="center"> Fonte: Elaborado pelo grupo GP5 </h6>

&emsp;&emsp; Em conclusão, utilizando um microcontrolador ESP32 e componentes como botão, LED, resistor e LCD, o sistema simula a localização dos ativos no estoque. Ao pressionar o botão, o operador do estoque pode acessar informações relevantes, como o tipo de ativo presente, sua data de chegada, localização no estoque e estado de conservação. O LED indica que as informações estão sendo exibidas no LCD e simultaneamente armazenadas. Essa solução proporciona um controle mais eficiente e preciso do estoque, prevenindo a perda de ativos e facilitando a gestão dos recursos da empresa RNP.

### 3.4.2. Protótipo Físico do Projeto (offline)

_**Casos de testes**_

&emsp;&emsp; Logo abaixo temos o vídeo no qual foi apresentado os casos de testes do protótipo feito pelo grupo GP5, nele é apresentado o primeiro protótipo com a atuação do GPS juntamente com a utilização do protocolo MQTT e o HiveMQ.
[Vídeo dos casos de testes](https://www.youtube.com/shorts/UUTLBZlVYZc)

**#** | **Descrição** | **Pré-Condição** | **Procedimento de teste** | **Pós-condição/Resultado esperado** | **Observações** 
|----------|----------|----------|----------|----------|----------|
|01|Verificação da conecção Wi-Fi|O ESP32 está conectado ao computador e buscando se conectar com o Wi-Fi| Verificar o led indicador na cor azul que nesse caso está apagado, e aguardar para que ele acenda indicando conexão| Enquanto o sinal continuar o led continuará aceso | -
|02|Verificação da posição via GPS|O ESP32 está conectado ao computador e buscando se conectar com os satélites via GPS| Verificar o led indicador na cor verde que nesse caso está apagado, buscar um local com visualização clara do céu, aguardar para que ele encontre conexão| Enquanto o sinal continuar o led continuará aceso | -
|03|Verificação da posição via GPS|O ESP32 está conectado ao computador e perde a coneção com os satélites| Verificar o led indicador na cor verde que nesse caso está apagado, buscar um local com visualização clara do céu, e uma aréa com satélites no alcance, aguardar para que ele encontre conexão| O sistema não acende o led | -
|04|Verificação dos pontos de localização coletados pelo GPS|O ESP32 está conectado ao computador e buscando se conectar com os satélites via GPS para a obtenção de dados| Os dados coletados de latitude e longitude via GPS vão ser exibibidos no LCD e sendo enviados no ESP32 para a aba de "mensagens" no HiveMQ via protocolo MQTT, depois disso os dados vão ser armazenados no banco de dados para que, com esses novos pontos consiga alimentar o mapa disposto no site | O mapa apresentado no site com os novos pontos coletados via GPS | Os dados de latitude e longitude vão começar a ser coletados quando no site for clicado no botão "iniciar viagem" e vão parar de ser coletados quando no site for clicado no botão "finalizar viagem"
|05|Verificação se o GPS está funcionando através dos sinais luminosos de led| Testando conexão com os satélites via GPS e Led piscando informando se está acontecendo a obtenção de novos dados| O GPS quando estiver funcionando vai contar com os sinais de luminosidade do led verde simbolizando que a obtenção de novos dados está acontecendo e que esses novos dados coletados de latitude e longitude estão sendo enviados do ESP32 para "mensagens" no HiveMQ via protocolo MQTT.| O led piscando de tempo em tempo sinalizando a obtenção de novos dados de latitude e longitude| O led tambem pode ser ligado via comando no HiveMQ, para isso basta escrever "ON_VD" para que o led ligue e "OFF_VD" para que o led desligue.


### 3.4.3. Protótipo do Projeto com MQTT e I2C

Aqui mostraremos diversas situações de uso e vídeos com demonstrações do protótipo.

**#** | **Configuração do ambiente** | **Ação do usuário** | **Resposta esperada do sistema** 
|----------|----------|----------|----------|
|01| O esp32 está energizado, com acesso à internet, conectado a uma rede de satélites via módulo gps, e conectado ao broker MQTT | O usuário verifica o lcd | O lcd mostra em seu display a latitude e a longitude captada pelo módulo gps ou qualquer outra mensagem enviada pelo MQTT | 
|02| O esp32 está energizado, com acesso à internet, sem conexão com a rede de satélites, e conectado ao broker MQTT | O usuário verifica o lcd | O lcd mostra em seu display a mensagem "aguardando sinal" ou qualquer outra mensagem enviada pelo MQTT | 
|03| O esp32 está energizado, sem acesso à internet | O usuário reestabelece a conexão | A conexão com o broker MQTT é reestabelecida | 
Videos de demonstração :
|01|[Video aparelho funcionando como pretendido](https://www.youtube.com/shorts/7cdnhS4-9Jg)
|02|[Video falha na conexão com os satélites](https://www.youtube.com/shorts/pTx3oj_YPSQ](https://www.youtube.com/shorts/2NgmMyoByTE))
|03|[Video reestabelecendo conexão WiFi](https://www.youtube.com/shorts/pTx3oj_YPSQ)


### 3.4.4. Protótipo Físico do Projeto (online)	

&emsp;&emsp; No primeiro caso de teste que foi introduzido para fazer esse diagrama sequencial (UML), utilizamos o caso de teste numero 4 onde podemos destacar como que o usuário vai ver as informações dentro do site e como que acontece o fluxo de informações do nosso projeto (informações que são fornecidas através do módulo GPS para o ESP32 e que mostrados no display LCD e postados como mensagens no HiveMQ através do protocolo MQTT e por fim, armazenados no banco de dados para que os pontos de latitude e longitude sejam mostrados no mapa em nosso site). Abaixo podemos ver o diagrama sequencial (UML) do caso de teste 4.

<h6 align="center"> Figura 20 - 1ª UML: Caso de teste nº 4 (parte 1) </h6>

<div align="center">
	
![Circuito_1](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/UML%20-%20Diagrama%20Sequencial%20G5%20(1).jpg)
</div>

<h6 align="center"> Fonte: Elaborado pelo grupo GP5 </h6>

<h6 align="center"> Figura 21 - 1ª UML: Caso de teste nº 4 (parte 2) </h6>

<div align="center">
	
![Circuito_1](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/UML%20-%20Diagrama%20Sequencial%20G5.jpg)
</div>

<h6 align="center"> Fonte: Elaborado pelo grupo GP5 </h6>

&emsp;&emsp; Pode-se perceber que nessa segunda parte foi apresentada um modelo de condicional caso o GPS não consiga se conectar com a internet e fornecer as informações necessárias para o ESP32, assim o ESP32 não vai conseguir enviar as informações para o HiveMQ e consequentemente não vai ser possível armazenar os dados no banco de dados e mostrar os pontos de latitude e longitude no mapa do site.
&emsp;&emsp; Tirando esse contratempo de não conexão, o fluxo de informações dentro dentro do site e com a captação de informações está bem retratada no diagrama sequencial mostrado acima.

&emsp;&emsp; Logo a seguir temos algumas imagens referentes ao fluxo de informações do nosso projeto, onde podemos ver o ESP32 conectado com o GPS e com a internet, e o ESP32 enviando as informações para o HiveMQ via protocolo MQTT e por fim, armazenando os dados no banco de dados para que os pontos de latitude e longitude sejam mostrados no mapa em nosso site.

&emsp;&emsp; Logo a baixo pode-se ver as mensagens no monitor serial mostrando que o ESP32 está tentando se conectar com o WIFI e com o servidor MQTT para receber as informações do GPS e enviar para o HiveMQ.
<h6 align="center"> Figura 22 - Mensagens no monitor serial  </h6>

<div align="center">
	
![Circuito_1](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/monitor_serial_2.PNG)
</div>

<h6 align="center"> Fonte: Elaborado pelo grupo GP5 </h6>

&emsp;&emsp; Logo a baixo pode-se ver as mensagens de latitude e longitude sendo registradas no HiveMQ para que possam ser armazenadas no banco de dados e mostradas no mapa do site.
<h6 align="center"> Figura 23 - Mensagens no HiveMQ de novas latitudes e longitudes  </h6>

<div align="center">
	
![Circuito_1](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/dados_lat_long.PNG)
</div>

<h6 align="center"> Fonte: Elaborado pelo grupo GP5 </h6>

&emsp;&emsp; Logo a baixo pode-se ver o mapa do site mostrando os pontos de latitude e longitude que foram armazenados no banco de dados.
<h6 align="center"> Figura 24 - Novos pontos plotados no mapa  </h6>

<div align="center">
	
![Circuito_1](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/mapa_npontos.PNG)
</div>

<h6 align="center"> Fonte: Elaborado pelo grupo GP5 </h6>


&emsp;&emsp; Ja no segundo caso de teste que foi introduzido para fazer esse diagrama sequencial (UML), utilizamos o caso de teste numero 5 onde o usuário vai verificar se o dispositivo está conectando com o GPS ( ESP32 conectando com o GPS e se ele está conectando com a internet para fornecer os dados de latitude e longitude para o ESP32) e para simbolizar que o GPS está coletando dados e enviando para o ESP32, o led verde será acionado de 1 em 1 hora para piscar e mostrar que mais uma informação foi salva no HiveMQ via protocolo MQTT. Abaixo podemos ver o diagrama sequencial (UML) do caso de teste 5.

<h6 align="center"> Figura 25 - 2ª UML: Caso de teste nº 5 </h6>

<div align="center">
	
![Circuito_1](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/UML%20-%20Diagrama%20Sequencial%20G5%20(2).jpg)
</div>

<h6 align="center"> Fonte: Elaborado pelo grupo GP5 </h6>

&emsp;&emsp; Pode-se perceber que nessa UML para o caso de teste 5 o objetivo é a visualização do led piscando simbolizando que o GPS está coletando novos dados e enviando para o ESP32, e o ESP32 está enviando para o HiveMQ via protocolo MQTT. 

&emsp;&emsp; Logo a seguir apresentamos um vídeo referentes a UML do caso de teste 5. Nele mostra o Led piscando simbolizando que o GPS se conectou com a internet e que está conseguindo obter novas informações de latitude e longitude. Vale destacar que colocamos um delay menor (3 em 3 segundos) somente para a representação de como vai funcionar na prática (quando o GPS for acionado e o Led piscar de hora em hora junto com a nova informação de latitude e longitude).

<h6 align="center"> Figura 26 - Vídeo do funcionamento do Led piscando (caso de teste nº 5) </h6>

<div align="center">

[Vídeo do circuito](https://youtu.be/jYl7LbJtWQs)

![Circuito_2](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/video_imagem_led_piscando.png)

</div>

<h6 align="center"> Fonte: Elaborado pelo grupo GP5 </h6>

### 3.4.5. Protótipo Final do Projeto

&emsp;&emsp;Nosso MVP consiste em uma solução ultra simples para o problema da RNP, utilizando o mínimo de componentes possíveis e focando numa aplicação rápida da solução. Usando apenas um micro controlador ESP32, um módulo GPS e um led, energizados por uma pequena bateria e um controlador de tensão, conseguimos monitorar em tempo real qualquer ativo da RNP, caso um módulo GSM com um cartão SIM seja adicionado, nossa solução consegue também, monitorar em tempo real ativos em trânsito.

&emsp;&emsp;Nessa etapa final do nosso projeto, refinamos nossa solução e testamos nosso protótipo final e suas funcionalidades, após os testes de guerrilha e nossos próprios testes esse foi o protótipo físico que desenvolvemos. Nosso protótipo físico é amparado pelo dashboard digital documentado na seção 3.2.5. Logo abaixo, mostramos imagens do protótipo final.

<h6 align="center"> Figura 27 - Protótipo final visto de cima </h6>

![Protótipo final](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/Prototipo_final_cima.jpeg)

<h6 align="center"> Figura 28 - Protótipo final por dentro </h6>

![Protótipo final interior](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/Prototipo_final_dentro.jpeg)

<h6 align="center"> Figura 29 - Conexões Protótipo final </h6>

![Protótipo final Conexões](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/captura_modelo_conexoes.png)

[Vídeo protótipo final](https://www.youtube.com/watch?v=mCktzQ60yg8&ab_channel=Th%C3%A9oTosto)

&emsp;&emsp;Conexões : (Led - pino 25 e GND), (GPS - pinos 3,3V, 16,17 e GND), (Bateria - conectado ao controlador de tensão e GND), (Controlador de tensão - 5V e GND). 


## Testes GPS

**#** | **Configuração do ambiente** | **Ação do usuário** | **Resposta esperada do sistema** 
|----------|----------|----------|----------|
|01| Protótipo com a bateria ligada e conectado a internet  | usuário inicia viagem pelo site e quer saber se o gps está ligado, então ele olha o led  | o led verde está ligado, indicando que o gps está ligado| 
|02| Protótipo com a bateria ligada conectado a internet e com o gps ligado | Usuário quer saber se o disposítivo está recebendo sinal de gps | ele checa as mensagens recebidas via MQTT e recebe Aguardando sinal | 
|03| Protótipo com a bateria ligada conectado a internet e com o gps ligado | Usuário envia a mensagem (codigo do ativo),GPS-OFF | o modulo GPS para de enviar informações | 

Com a exibição por meio de imagens de como funciona a parte física da nossa solução, é possível ter uma ideia do quão importante é o hardware no projeto IoT que contruímos. Como conclusão, vale ressaltar que cada componente e ligação do nosso protótipo físico foi minuciosamente pensado, pois visamos ao máximo manter um equilíbrio entre a funcionalidade em uma alta capacidade e a economia de recursos

## Teste de guerrilha
&emsp;&emsp;Os testes de usabilidade foram realizados por meio de uma atividade interclasses em 14/12/2023. O objetivo era avaliar a usabilidade, funcionalidade e acessibilidade do nosso protótipo final e da interface web. Participaram como testadores alunos do segundo semestre da Inteli, com idades entre 17 e 20 anos. Eles foram assistidos por membros do nosso grupo, que tinham a função de esclarecer os requisitos da empresa e as expectativas em relação ao desempenho dos usuários, sem, no entanto, interferir no processo.

&emsp;&emsp;Durante os testes, um aluno do nosso grupo foi responsável por observar e registrar todas as dificuldades, facilidades e erros identificados pelos usuários tanto no protótipo final quanto na página web. Após a conclusão dos testes, este aluno preencheu um formulário detalhando as observações, incluindo quais metas preestabelecidas foram atingidas com sucesso ou não. As figuras 27 a 34 apresentam essas informações detalhadamente.

<h6 align="center"> Figura 30 - Primeiro teste protótipo </h6>

<div align="center">
	
![Teste_Prototipo_1](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/teste_prototipo_1.png)
</div>

<h6 align="center"> Fonte: Elaborado pelo grupo GP5 </h6>
<h5 align="center">Na figura 30 Temos a primeira aluna a testar o protótipo, ela obteve sucesso nas duas primeiras tarefas e mostrou dificuldade na terceira.</h5>

<h6 align="center"> Figura 31 - Segundo teste protótipo </h6>

<div align="center">
	
![Teste_Prototipo_2](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/teste_prototipo_2.png)
</div>

<h6 align="center"> Fonte: Elaborado pelo grupo GP5 </h6>
<h5 align="center">Na figura 31 Temos o segundo aluno que testou nosso protótipo, pode-se ver que ele teve mais dificuldade de interagir com o hardware, mostrando dificuldade na 3 tarefa e sem concluir a segunda.</h5>

<h6 align="center"> Figura 32 - Terceiro teste protótipo </h6>

<div align="center">
	
![Teste_Prototipo_3](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/teste_prototipo_3.png)
</div>

<h6 align="center"> Fonte: Elaborado pelo grupo GP5 </h6>
<h5 align="center">Na figura 32 Temos o terceiro aluno que testou nosso protótipo, ele conseguiu cumprir todas as tarefas sem nenhuma dificuldade</h5>

<h6 align="center"> Figura 33 - Ocorrências testes protótipo </h6>

<div align="center">
	
![Ocorrencias_Prototipo](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/ocorrencias_prototipo.png)
</div>

<h6 align="center"> Fonte: Elaborado pelo grupo GP5 </h6>
<h5 align="center">Nesta figura 33 temos as ocorrências dos testes do protótipo físico, nele é possível notar que tivemos dois pontos de severidade alta, indicando que ainda existem ponto para mexer.</h5>

<h6 align="center"> Figura 34 - Primeiro teste site </h6>

<div align="center">
	
![Teste_Site_1](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/teste_site_1.png)
</div>

<h6 align="center"> Fonte: Elaborado pelo grupo GP5 </h6>
<h5 align="center">Na figura 34 Temos o primeiro aluno que testou o nosso site, ele demonstrou dificuldade somente na tarefa dois de visualizar uma viagem, nas outras duas concluiu com sucesso</h5>

<h6 align="center"> Figura 35 - Segundo teste site </h6>

<div align="center">
	
![Teste_Site_2](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/teste_site_2.png)
</div>

<h6 align="center"> Fonte: Elaborado pelo grupo GP5 </h6>
<h5 align="center"> Na figura 35 Temos a segunda aluna que testou o site, ele enfrentou dificuldade nas duas primeiras tarefas, que são relacionadas a parte de viagens, já na terceira tarefa de ativos realizou com sucesso.</h5>

<h6 align="center"> Figura 36 - Terceiro teste site </h6>

<div align="center">
	
![Teste_Site_3](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/teste_site_3.png)
</div>

<h6 align="center"> Fonte: Elaborado pelo grupo GP5 </h6>
<h5 align="center">Na figura 36 Temos o terceiro aluno que testou nosso site, ele obteve dificuldade somente na visualização de viagens, já nas outras duas tarefas ele obteve sucesso.</h5>

<h6 align="center"> Figura 37 - Ocorrências testes site </h6>

<div align="center">
	
![Ocorrencia_Teste](https://github.com/2023M4T8Inteli/grupo5/blob/main/assets/imagens/ocorrencias_site.png)
</div>

<h6 align="center"> Fonte: Elaborado pelo grupo GP5 </h6>
<h5 align="center">Na figura 37 temos as ocorrências dos testes do site, nele é possível perceber que ainda existem bastantes pontos a melhorar.</h5>

&emsp;&emsp;A partir da análise das informações coletadas nas figuras mencionadas, concluímos que tanto o protótipo físico quanto o website apresentam áreas para melhoria, mas estão em um estágio avançado de desenvolvimento, com uma alta taxa de sucesso nas tarefas designadas.

&emsp;&emsp;Em relação ao site, os feedbacks mais comuns apontaram dificuldades na localização de páginas e na compreensão dos filtros necessários. Para resolver isso, adotamos medidas imediatas: as filtragens não são mais obrigatórias para as pesquisas, e adicionamos um botão de fácil acesso no canto superior esquerdo da tela, permitindo o retorno ao menu principal de forma intuitiva. Quanto ao protótipo físico, os problemas identificados estavam relacionados principalmente a questões de código e conexões de fios. Como resposta, substituímos o ESP32, que apresentava falhas, e reestruturamos o código para corrigir os erros identificados.

&emsp;&emsp;A realização desses testes de usabilidade e a subsequente implementação de melhorias são atividades cruciais no desenvolvimento de nossos produtos. Esses processos nos permitem identificar e resolver problemas práticos e de interface, garantindo que tanto o site quanto o protótipo físico não só atendam às necessidades dos usuários, mas também proporcionem uma experiência intuitiva e satisfatória. Além disso, ao incorporar o feedback dos usuários, reforçamos nosso compromisso com a melhoria contínua e a inovação centrada no usuário.


# <a name="c3"></a>4. Possibilidades de Descarte

## Descarte Incorreto de Materiais em Soluções IoT: Danos e Impactos

O descarte incorreto de materiais utilizados em soluções IoT causa danos não só no meio ambiente, mas também na saúde humana e na segurança das informações. Para entender melhor estes impactos, é importante explorar separadamente cada área:

### Meio Ambiente

- **Riscos e Danos:** Os mais sérios riscos ao meio ambiente decorrem da presença de substâncias tóxicas e produtos químicos corrosivos. Se liberados no meio ambiente através de descarte indevido, contaminam o solo, a água e o ar, representando uma ameaça aos ecossistemas.

### Saúde Humana

- **Consequências dos Danos Ambientais:** Estes danos impactam diretamente a saúde humana, uma vez que os ecossistemas afetados são essenciais para a sobrevivência humana.
- **Exposição e Riscos:** A exposição humana a ambientes contaminados pode ocorrer por contato direto com solo contaminado, ingestão de alimentos ou água contaminada e inalação de partículas tóxicas no ar.
- **Problemas de Saúde:** Isso pode levar a problemas de saúde como danos ao sistema nervoso, distúrbios do desenvolvimento, doenças respiratórias, câncer, entre outros.

### Segurança das Informações

- **Risco de Vazamento de Dados:** Dispositivos eletrônicos descartados incorretamente podem armazenar dados pessoais e confidenciais, como informações de identificação, senhas, histórico de navegação e dados de localização.
- **Consequências:** O descarte inadequado aumenta o risco de violações de privacidade, roubo de identidade, fraude e outras atividades maliciosas.

## Planejamento para Descarte Adequado

Após entender a importância de um descarte bem-planejado, é crucial considerar os componentes do nosso projeto e planejar soluções adequadas para o mesmo.

| Materiais                                      | Método de descarte                                                        | Exemplos de lugares de descarte                                                                                                                                                                                                                                                                                                                         | Vida útil      | Materiais                                      |
|------------------------------------------------|---------------------------------------------------------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|----------------|------------------------------------------------|
| Resistor                                       | Pontos de coleta específicos para eletrônicos ou centros de reciclagem que aceitem componentes eletrônicos. | Alguns lugares que podem ser feito o descarte seriam lojas de operadoras (Oi, Vivo, Claro) Caso não encontre alguma dessas lojas você pode procurar no site: [https://greeneletron.org.br/localizador](https://greeneletron.org.br/localizador)                                                                                               | 10 a 15 anos.  | Carbono, metais e ligas.                       |
| Antena WiFi 2.4ghz 3dbi Cabo 15cm              | Pontos de coleta específicos para eletrônicos ou centros de reciclagem que aceitem componentes eletrônicos. | Alguns lugares que podem ser feito o descarte seriam lojas de operadoras (Oi, Vivo, Claro) Caso não encontre alguma dessas lojas você pode procurar no site: [https://greeneletron.org.br/localizador](https://greeneletron.org.br/localizador)                                                                                               | 5 a 10 anos.   | Metais e plástico                              |
| Fio Macho-Fêmea                                | Pontos de coleta específicos para eletrônicos ou centros de reciclagem que aceitem componentes eletrônicos. | Alguns lugares que podem ser feito o descarte seriam lojas de operadoras (Oi, Vivo, Claro) Caso não encontre alguma dessas lojas você pode procurar no site: [https://greeneletron.org.br/localizador](https://greeneletron.org.br/localizador)                                                                                               | 5 a 10 anos    | Revestimentos plásticos e metais.              |
| Fio Macho-Macho                                | Pontos de coleta específicos para eletrônicos ou centros de reciclagem que aceitem componentes eletrônicos. | Alguns lugares que podem ser feito o descarte seriam lojas de operadoras (Oi, Vivo, Claro) Caso não encontre alguma dessas lojas você pode procurar no site: [https://greeneletron.org.br/localizador](https://greeneletron.org.br/localizador)                                                                                               | 5 a 10 anos    | Revestimentos plásticos e metais.              |
| Protoboard                                     | Programas de reciclagem de eletrônicos aceitem esses itens. Os pontos de coleta de lixo eletronico devem aceitar os seguintes materiais: Plástico e Metal. | Além dos lugares já citados anteriormente para fazer o descarte (operadoras e locais específicos de descarte) você pode procurar fazer o descarte como o [https://www.ecycle.com.br/](https://www.ecycle.com.br/) que te ajuda a achar o mais próximo do seu cep                                                                                   | 5 a 10 anos.   | Plástico e metais pequenos.                    |
| Micro controlador placa DOIT ESP32 Bluetooth e WiFi | Este item deve ser descartado em locais apropriado para eletrônicos, por conter circuitos integrados que são prejudiciais ao meio ambiente. | Além dos lugares já citados anteriormente para fazer o descarte (operadoras e locais específicos de descarte) você pode procurar fazer o descarte como o [https://www.ecycle.com.br/](https://www.ecycle.com.br/) que te ajuda a achar o mais próximo do seu cep                                                                                   | 5 a 12 anos.   | Circuitos integrados podem conter substâncias tóxicas como chumbo. |
| Micro controlador Módulo GPS GY-NEO6MV2 com Antena | Este item deve ser descartado em locais apropriado para eletrônicos, por conter circuitos integrados que são prejudiciais ao meio ambiente. | Além dos lugares já citados anteriormente para fazer o descarte (operadoras e locais específicos de descarte) você pode procurar fazer o descarte como o [https://www.ecycle.com.br/](https://www.ecycle.com.br/) que te ajuda a achar o mais próximo do seu cep                                                                                   | 5 a 10 anos    | Circuitos integrados podem conter substâncias tóxicas como chumbo. |
| LCD Display 16x2 com BackLight Azul            | Deve ser descartado como um dispositivo eletrônico, pois contém materiais que podem ser reciclados. Os pontos de descarte de dispositivos podem ser localizados normalmente em mercados e shoppings | Além dos lugares já citados anteriormente para fazer o descarte (operadoras e locais específicos de descarte) você pode procurar fazer o descarte como o [https://www.ecycle.com.br/](https://www.ecycle.com.br/) que te ajuda a achar o mais próximo do seu cep                                                                                   | 5 a 8 anos.    | Alguns LCD podem conter mercúrio no backlight. |
| Cabo USB para Esp32                            | Cabos podem ser reciclados em centros de reciclagem de eletrônicos. O metal e o plástico podem ser separados e reutilizados. | Cabos USB são mais fáceis de serem descartados e qualquer local de lixo eletrônico aceita com mais facilidade, você pode procurar nos sites [https://www.ecycle.com.br/](https://www.ecycle.com.br/) e [https://greeneletron.org.br/localizador](https://greeneletron.org.br/localizador)                                                                                         | 3 a 5 anos.    | Plástico e metal                               |

Fontes de pesquisa: [ChatGPT-4](https://chat.openai.com/), [Green eletron](https://greeneletron.org.br/blog/tudo-o-que-voce-precisa-saber-sobre-o-lixo-eletronico/), [Ecylce](https://www.ecycle.com.br/lixo-eletronico/)


## <a name="c5"></a>5. Conclusões e Recomendações

Os resultados do nosso projeto foram completamente satisfatórios nos aspectos de construção de um **MVP (Produto Viável Mínimo)** para solucionar o problema proposto pelo cliente — **falta de ferramentas adequadas para localizar ativos**. Nossa solução, que aborda o escopo de rastreamento de ativos durante o transporte, é composta por duas partes interdependentes:

1. **Microcontrolador Rastreável via GPS**: Dependente de internet e energia, deve ser alocado juntamente ao ativo a ser administrado via localização.
2. **Plataforma Web**: Acesso remoto para iniciar/finalizar um rastreamento, acompanhar em tempo real, ver históricos de viagens e registrar ativos.

Em muitos fatores, a solução que entregamos superou expectativas ao oferecer *features* além das requisitadas, reforçando o valor do projeto. Porém, melhorias que não foram implementadas por conta do curto período de trabalho e limitação das tecnologias utilizadas, podem ser realizadas posteriormente pelo cliente.

**é importante afirmar que nosso projeto não foi construido com foco em segurança, e falhas de segurança são provaveis**
## Recomendações de Melhorias

### Hospedagem da Plataforma Web em um Servidor
A plataforma que fizemos para a solução esteve rodando em um sistema local durante o desenvolvimento. Para torná-la acessível on-line, é necessário hospedá-la em um servidor web. Os arquivos do site para upload e instruções estão disponíveis no repositório do GitHub.

### Página de Login
Como o escopo do módulo em que trabalhamos não se expande para abordar questões de segurança, a plataforma web foi construída sem uma página de login ou recursos de segurança adicionais. Para proteger os dados e garantir acesso restrito, é aconselhável implementar uma página de login e medidas de segurança, como criptografia e autenticação.

### Roteador Portátil Wireless
Devido ao limite de tempo que tivemos durante a construção da solução, não foi possível implementar a função de conectividade usando 3G no protótipo. Portanto, para que os ativos possam ser rastreados durante um transporte, é crucial que os microcontroladores estejam conectados a um sinal de internet. Isso pode ser feito pela aquisição de um roteador portátil, que oferece sinal de internet sem nenhuma instalação física. Os preços variam de 100 a 1.000 reais, dependendo do tamanho, capacidade e expansividade de sinal, marca e outros fatores.

### Testes de segurança
Nosso projeto e testes tiveram foco em sua funcionalidade não em sua segurança, portanto testes focados na proteção do sistema são recomendados.
## <a name="c6"></a>6. Referências

- SILVA, B. C. da; MEDEIROS, D. S. de. **Internet of Things: Conceitos e Tecnologias**. São Paulo: Novatec Editora, 2019.

- COHN, M. **User Stories Applied: For Agile Software Development**. Boston: Addison-Wesley, 2004.  
  Disponível em: [What is Scrum?](https://www.scrum.org/resources/what-is-scrum). Acesso em: 18 dez. 2023.

- **Lei Geral de Proteção de Dados Pessoais (LGPD), Lei nº 13.709/2018**. Brasília, DF: Presidência da República, 2018.  
  Disponível em: [Lei nº 13.709/2018](http://www.planalto.gov.br/ccivil_03/_ato2015-2018/2018/lei/L13709.htm). Acesso em: 18 dez. 2023.

- **Reciclagem de Eletrônicos e Impacto Ambiental**.  
  Disponível em: [Ecycle](https://www.ecycle.com.br/). Acesso em: 18 dez. 2023.  
  Disponível em: [Green Eletron](https://greeneletron.org.br/). Acesso em: 18 dez. 2023.

- BOOCH, G.; RUMBAUGH, J.; JACOBSON, I. **UML: Guia do Usuário**. 2. ed. Rio de Janeiro: Elsevier, 2006.

- MONK, S. **Programando o Arduino: Primeiros Passos com Sketches**. São Paulo: Novatec Editora, 2013.

- ESPRESSIF SYSTEMS. **ESP32 Series Datasheet**. [S.l.], 2020.  
  Disponível em: [Espressif ESP32](https://www.espressif.com/en/products/socs/esp32). Acesso em: 18 dez. 2023.

- **Wokwi - Documentação e Tutoriais**.  
  Disponível em: [Wokwi Docs](https://docs.wokwi.com/). Acesso em: 18 dez. 2023.

- AUTODESK. **Tinkercad: From mind to design in minutes**.  
  Disponível em: [Tinkercad](https://www.tinkercad.com/). Acesso em: 18 dez. 2023.

- ARDUINO. **Arduino Language Reference**.  
  Disponível em: [Arduino Reference](https://www.arduino.cc/reference/en/). Acesso em: 18 dez. 2023.

- MQTT.org. **MQTT Protocol**.  
  Disponível em: [MQTT.org](https://mqtt.org/). Acesso em: 18 dez. 2023.

- MOZILLA DEVELOPER NETWORK. **JavaScript Guide**.  
  Disponível em: [MDN JavaScript Guide](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide). Acesso em: 18 dez. 2023.

- MOZILLA DEVELOPER NETWORK. **CSS: Cascading Style Sheets**.  
  Disponível em: [MDN CSS](https://developer.mozilla.org/en-US/docs/Web/CSS). Acesso em: 18 dez. 2023.

- TWITTER. **Bootstrap: The most popular HTML, CSS, and JS library in the world**.  
  Disponível em: [Bootstrap](https://getbootstrap.com/). Acesso em: 18 dez. 2023.
