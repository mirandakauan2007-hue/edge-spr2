# OrbitEye - Sistema Inteligente de Monitoramento Ambiental

## Integrantes

| Nome                            | RM     |
| ------------------------------- | ------ |
| Murilo Araujo Honorio Silva     | 573517 |
| Kauã Miranda Dos Santos Fonseca | 569473 |
| Isadora Bradac Canovas          | 569585 |

---

## Descrição do Projeto

O OrbitEye é uma solução inteligente inspirada em tecnologias de observação terrestre utilizadas por satélites para monitoramento ambiental.

O sistema realiza a coleta de dados de temperatura e umidade do ambiente através do sensor DHT22, analisando as condições climáticas e emitindo alertas visuais e sonoros quando identifica situações que podem representar riscos ambientais, como queimadas ou períodos de seca.

---

## Objetivo

Auxiliar na prevenção de desastres ambientais por meio do monitoramento contínuo das condições climáticas, permitindo a identificação antecipada de cenários favoráveis à ocorrência de queimadas e à redução da umidade do solo e da vegetação.

---

## Componentes Utilizados

* Arduino Uno
* Sensor DHT22
* LED Verde
* LED Amarelo
* LED Vermelho
* Buzzer
* Resistores de 220Ω
* Jumpers

---

## Funcionamento do Sistema

O sensor DHT22 realiza a leitura da temperatura e da umidade do ambiente.

Com base nos valores coletados, o Arduino classifica a situação em três níveis de risco:

### Ambiente Seguro

Condição:

* Temperatura menor que 30°C
* Umidade maior que 40%

Ação:

* LED Verde aceso

### Situação de Atenção

Condição:

* Temperatura entre 30°C e 40°C
* Ou umidade entre 20% e 40%

Ação:

* LED Amarelo aceso

### Situação de Risco Ambiental

Condição:

* Temperatura acima de 40°C
* Ou umidade abaixo de 20%

Ação:

* LED Vermelho aceso
* Buzzer acionado

---

## Estrutura do Circuito

O sensor DHT22 envia os dados de temperatura e umidade para o Arduino Uno.

O Arduino processa as informações e aciona automaticamente os LEDs e o buzzer de acordo com o nível de risco identificado.

### Mapeamento dos Pinos

| Componente   | Pino Arduino |
| ------------ | ------------ |
| DHT22 (DATA) | 2            |
| LED Verde    | 8            |
| LED Amarelo  | 9            |
| LED Vermelho | 10           |
| Buzzer       | 11           |

---

## Código Fonte

O código principal do projeto está localizado em:

```text
codigo/sketch.ino
```

---

## Arquivo do Circuito

O arquivo da simulação Wokwi está localizado em:

```text
circuito/diagram.json
```

---

## Instruções de Execução

### Executando no Wokwi

1. Abrir o projeto no Wokwi.
2. Iniciar a simulação.
3. Alterar os valores de temperatura e umidade do sensor DHT22.
4. Observar o comportamento dos LEDs e do buzzer conforme as condições ambientais simuladas.

---

## Tecnologias Utilizadas

* Arduino C++
* Wokwi Simulator
* GitHub

---

## Evidências

### Circuito

Adicionar imagem do circuito:

```text
circuito/circuito.png
```

### Simulação

Adicionar capturas de tela da simulação funcionando:

```text
evidencias/simulacao-funcionando.png
```

### Monitor Serial

Adicionar captura de tela do Monitor Serial:

```text
evidencias/monitor-serial.png
```

---

## ODS Relacionadas

### ODS 11 – Cidades e Comunidades Sustentáveis

Contribui para o desenvolvimento de cidades mais resilientes por meio do monitoramento preventivo de riscos ambientais.

### ODS 13 – Ação Contra a Mudança Global do Clima

Auxilia na identificação de condições climáticas críticas associadas a eventos extremos.

### ODS 15 – Vida Terrestre

Contribui para a preservação dos ecossistemas terrestres ao apoiar ações preventivas contra queimadas e degradação ambiental.

---

## Estrutura do Repositório

```text
OrbitEye/
│
├── README.md
│
├── codigo/
│   └── sketch.ino
│
├── circuito/
│   ├── diagram.json
│   └── circuito.png
│
├── evidencias/
│   ├── simulacao-funcionando.png
│   └── monitor-serial.png
│
└── docs/
```

## 🎥 Vídeo do Projeto

[![Assista o vídeo](https://img.youtube.com/vi/SqhtKeaVhUM/0.jpg)](https://youtu.be/SqhtKeaVhUM)

---
## Projeto Tinkercad

🔗 Simulação do circuito:
https://www.tinkercad.com/things/SEU-LINK-AQUI

## Código Arduino

O projeto foi feito para monitoramento de temperatura, luz e umidade com LEDs e buzzer.

## Conclusão

O OrbitEye demonstra como sistemas embarcados podem ser utilizados para monitoramento ambiental de baixo custo, contribuindo para a prevenção de queimadas, identificação de períodos de seca e conscientização sobre a importância da preservação dos recursos naturais.
# edge2-sprint
