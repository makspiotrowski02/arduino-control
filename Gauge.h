#ifndef GAUGE_H
#define GAUGE_H
#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_INA219.h>

class Gauge {
  
  private:
    
    uint8_t addr;
   float shuntvoltage;
  float busvoltage;
  float current_mA;
  float loadvoltage;
  float power_mW;
  public:
  Adafruit_INA219 ina219;
  void begina();
  float getvoltage();
    Gauge(uint8_t addr);
    void init();
    void measure();
    void printinfo();
    
};
#endif
