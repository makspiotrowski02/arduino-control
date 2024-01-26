#include "Screen.h"

// Constructor
Screen::Screen()
{
    LCD= new LiquidCrystal_I2C(0x27, 20, 4);
}

void Screen::Init()
{
  LCD->createChar(0, customchar);
  delay(1000);
  // initialize the LCD
  LCD->begin();
  LCD->backlight();
  LCD->clear();
  LCD->print("Initialize code...");
  delay(1000);
  LCD->clear();
  LCD->print(" *** Done ***");
  delay(1000);
}
// Setters
void Screen::setBuzzer(float V, float A, float Hz)
{
   this->BVolt= V;
   this->BAmper= A;
   this->BHertz= Hz;
}
void Screen::setDioda(float V, float A)
{
   this->DVolt= V;
   this->DAmper= A;
}
void Screen::setMagnes(float V, float A)
{
   this->MVolt= V;
   this->MAmper= A;
}

//Functions
int Screen::if10(int nmbr)
{
  int counter=0;
  while(nmbr/10!=0)
    {
      counter++;
      nmbr=nmbr/10;
    }
   return counter;
}

void Screen::printtab(int tab)
{
  LCD->clear();
  
  if(tab==1)
  {
    for(int i=0; i<4; i++) 
    {
      LCD->setCursor(10 ,i);
      LCD->write(0);
      LCD->setCursor(9 ,i);
      LCD->write(0);
    
    }
  }
  else
  {
    for(int i=0; i<4; i++) 
    {
      LCD->setCursor(0 ,i);
      LCD->write(0);
      LCD->setCursor(19 ,i);
      LCD->write(0);
    
    }
  }
}

void Screen::defaultscreen(int tab)
{
  LCD->clear();
  printtab(tab);
  if(tab==1)
  {
    //Magnes
    LCD->setCursor(1,0);
    LCD->print("Magnes");
    LCD->setCursor(2-if10(MVolt),1);
    LCD->print(MVolt);
    LCD->print(" V");
    LCD->setCursor(2-if10(MAmper),2);
    LCD->print(MAmper);
    LCD->print(" A");


    //Dioda
    LCD->setCursor(12,0);
    LCD->print("Dioda");
    LCD->setCursor(13-if10(DVolt),1);
    LCD->print(DVolt);
    LCD->print(" V");
    LCD->setCursor(13-if10(DAmper),2);
    LCD->print(DAmper);
    LCD->print(" A");
  }
  else
  {
    LCD->setCursor(7,0);
    LCD->print("Buzzer");
    LCD->setCursor(7-if10(BVolt),1);
    LCD->print(BVolt);
    LCD->print(" V");
    LCD->setCursor(7-if10(BAmper),2);
    LCD->print(BAmper);
    LCD->print(" A");
    LCD->setCursor(7-if10(BHertz),3);
    LCD->print(BHertz);
    LCD->print(" Hz");
  }
}
void Screen::printdata(int tab)
{
  
  if(tab==1)
  {
    // Magnes;
    LCD->setCursor(1,1);
    LCD->print("      ");
    LCD->setCursor(2-if10(MVolt),1);
    LCD->print(MVolt);
    LCD->setCursor(1,2);
    LCD->print("      ");
    LCD->setCursor(2-if10(MAmper),2);
    LCD->print(MAmper);
    //Dioda
    LCD->setCursor(12,1);
    LCD->print("      ");
    LCD->setCursor(13-if10(DVolt),1);
    LCD->print(DVolt);
    LCD->setCursor(12,2);
    LCD->print("      ");
    LCD->setCursor(13-if10(DAmper),2);
    LCD->print(DAmper);
    
    
  }
  else
  {
    
  }
}
