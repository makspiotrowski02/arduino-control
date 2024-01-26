#include "Screen.h" 
Screen lcd;
int CurrentScreen=1;
void setup()
{
 lcd.Init();
}

void loop()
{
  
  lcd.defaultscreen(CurrentScreen);
  delay(4000);
  lcd.setMagnes(13.83, 2.34);
  delay(2000);
  lcd.printdata(CurrentScreen);
  while(1);
  
}
