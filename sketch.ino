#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT22

#define LED_VERDE 8
#define LED_AMARELO 9
#define LED_VERMELHO 10
#define BUZZER 11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);

  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(BUZZER, OUTPUT);

  dht.begin();
}

void loop() {

  float temperatura = dht.readTemperature();
  float umidade = dht.readHumidity();

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.print(" °C | Umidade: ");
  Serial.print(umidade);
  Serial.println("%");

  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, LOW);
  noTone(BUZZER);

  if (temperatura < 30 && umidade > 40) {

    digitalWrite(LED_VERDE, HIGH);

  }
  else if ((temperatura >= 30 && temperatura <= 40) ||
           (umidade >= 20 && umidade <= 40)) {

    digitalWrite(LED_AMARELO, HIGH);

  }
  else {

    digitalWrite(LED_VERMELHO, HIGH);
    tone(BUZZER, 1000);

  }

  delay(2000);
}
