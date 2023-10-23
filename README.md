# Estudo de plataforma embarcada - Raspberry Pi Pico W

O código dentro da pasta src é um programa para o Raspberry Pi Pico que, em resumo, lê dados de um sensor de umidade e temperatura do tipo DHT22. O sensor está conectado ao pino 8 da placa, e o programa utiliza a biblioteca DHT para obter as leituras de temperatura e umidade. A cada 1,5 segundos o programa realiza a leitura da temperatura e da umidade, enviando esses dados via comunicação serial para serem printados no terminal.

Segue o link para a simulação no Wowki, em que é possível ver como o código funciona na prática, com a montagem do microcontrolador:
https://wokwi.com/projects/379333687564669953
