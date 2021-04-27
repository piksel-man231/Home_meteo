#include <QuadDisplay2.h>

QuadDisplay dp1(9);

void setup() {
  // put your setup code here, to run once:
  dp1.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  dp1.displayInt(123);
}
