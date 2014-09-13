#include "XindaJoy.h"

XindaJoy joy(0, 1, 2);
 
void setup()
{
  Serial.begin(9600);
}
 
void loop()
{
  joy.poll();
  Serial.print(joy.isClicked() ? '!' : '_');
  Serial.println(joy.getDirection());
}
