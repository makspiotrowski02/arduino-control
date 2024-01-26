#ifndef BUZZER_H
#define BUZZER_H

#include <Arduino.h>

class Buzz
{
  private:
    byte pin;
  public:
    Buzz(byte pin);
    void init();
    void on();
    void off();
    void pulse();
};
#endif
