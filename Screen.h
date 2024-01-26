#ifndef SCREEN_H
#define SCREEN_H

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <Arduino.h>

class Screen
{
private:
  byte customchar[8]={B01110,B01110,B01110,B01110,B01110,B01110,B01110, B01110};
  
  //Buzzer
  float BVolt= 11.50;
  float BAmper= 0.23;
  float BHertz= 123.44;
  //Diody
  float DVolt= 10.43;
  float DAmper= 3.58;
  //Magnes
  float MVolt= 12.00;
  float MAmper= 02.05;
  
  float numer3;
  LiquidCrystal_I2C* LCD;
  
 public:
    //setters
    void setBuzzer(float V, float A, float Hz);
    void setDioda(float V, float A);
    void setMagnes(float V, float A);
    int if10(int nmbr);
    Screen();
    void Init();
    void printtab(int tab);
    void defaultscreen(int tab);
    void printdata(int tab);
    
  
};




 #endif
