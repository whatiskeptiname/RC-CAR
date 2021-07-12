#include"wrapper.h"

void loop()
{
  readPPMData();
  for (int i = 0; i < 8; i++)
  {
    Serial.print(" " + String(ch[i]) + " ");
  }
  Serial.println();
  delay(1000);
  return;
  if (system_alive())
  {
    servo_posn();
    servo_dance();
    get_gear();
    mobilize();
  }
  else
  {
    neutral();
    Serial.println("System on hold");
  }
  Serial.println();
}
