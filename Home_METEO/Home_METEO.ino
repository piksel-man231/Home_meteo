#include <TroykaDHT.h>
#include <QuadDisplay2.h>

DHT sen(0, DHT11);
QuadDisplay dp1(10,4,2);
QuadDisplay dp2(9,5,7);

void setup() {
  // put your setup code here, to run once:
  dp1.begin();
  dp2.begin();
  Serial.begin(9600);
  sen.begin();
}


void loop() {
  // put your main code here, to run repeatedly:
  sen.read();
  //Serial.print(sen.getHumidity());
  int temp = 0;
  temp = sen.getTemperatureC();
  dp1.displayTemperatureC(temp);
  int hum = 0;
  hum = sen.getHumidity();
  dp2.displayHumidity(hum);
}
