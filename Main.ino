#include "Buzzer.h"
#include "Gauge.h"


#define LED 9 //pin controlling LED
#define Magnet 7 //pin controlling Electromagnet
#define Buzzer 6 //pincontrolling buzzer

Gauge miernik(0x40);
 Buzz buzzer1(6);
Gauge miernikBuzzer(0x40);
void setup()
{ 
  miernik.begina();
        
}


void loop() 
{
  
  buzzer11.on();
  miernik.measure();
  miernik.measure();
  delay(500);
  buzzer1.off();
   buzzer1.pulse();
  
}
