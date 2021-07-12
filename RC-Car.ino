// This is the main file

#include"wrapper.h" // include the wrapper file

void loop()
{
  readPPMData(); // get the ppm data from transmitter
  for (int i = 0; i < 8; i++)
  {
    Serial.print(" " + String(ch[i]) + " "); // print the received channel datas
  }
  Serial.println(); // print \n 
  delay(1000);
  return; // I dont know why I had put this here 
  if (system_alive()) // to check if the system is alive
  {
    servo_posn(); // set the servo position
    servo_dance(); // quickly move the servo back and forth
    get_gear(); // get and set the speed of bot
    mobilize(); // move the bot according to the instruciton 
  }
  else
  {
    neutral(); // stop the bot
    Serial.println("System on hold");
  }
  Serial.println();
}
