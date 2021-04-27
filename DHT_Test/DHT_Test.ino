#include <TroykaDHT.h>

DHT sen(4, DHT11);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  sen.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  sen.read();
  Serial.print("Temp = ");
  Serial.print(sen.getTemperatureC());
  Serial.println(" C \t");
  Serial.print("Hum = ");
  Serial.print(sen.getHumidity());
  Serial.println(" %");
}
