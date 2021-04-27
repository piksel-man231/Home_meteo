#include <QuadDisplay2.h>

QuadDisplay dp1(10);
QuadDisplay dp2(9,5,7);

void setup() {
  // put your setup code here, to run once:
  dp1.begin();
  dp2.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  dp1.displayInt(123);
  dp2.displayInt(234);
}
