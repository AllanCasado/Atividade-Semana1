//allan casado
//leitura de um sensor de humidade e temperatura utilizando o raspberry pi pico

#include <DHT.h>

#define DHTPIN 8    // pino do sensor dht
#define DHTTYPE DHT22   // tipo do sensor

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial1.begin(115200);
  Serial1.println("Hello, Raspberry Pi Pico!");
  dht.begin();
}

void loop() {
  delay(1500);  // faz a leitura a cada 1,5 segundos

  // pega a temperatura e humidade no sensor
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // exibe a temperatura e a humidade no sensor
  Serial1.println(temperature);
  Serial1.println(humidity);
  Serial1.println("-------------------");
}
