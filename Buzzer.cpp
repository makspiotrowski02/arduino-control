#include "Buzzer.h"

Buzz::Buzz(byte pin) {
  // Use 'this->' to make the difference between the
  // 'pin' attribute of the class and the 
  // local variable 'pin' created from the parameter.
  this->pin = pin;
  init();
}
void Buzz::init() {
  //pinMode(pin, OUTPUT);
  // Always try to avoid duplicate code.
  // Instead of writing digitalWrite(pin, LOW) here,
  // call the function off() which already does that
  off();
}
void Buzz::on() {
  tone(pin, 1000);
}
void Buzz::off() {
  noTone(pin);
}

void Buzz::pulse()
{
  for(int i=0; i<5; i++)
  {
    for(int i2=0; i2<10; i2++)
     {
          tone(pin,1000);
          delay(100);
         noTone(pin); 
         delay(100);
         
     }
    delay(2000);
  }
}
