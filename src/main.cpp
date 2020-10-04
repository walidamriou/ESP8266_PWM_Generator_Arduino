/*
 ********************************************************************
  ESP8266 PWM Generator Arduino
  Implement PWM generator for Espressif Systems ESP8266 boards by Arduino framework  

  Github: https://github.com/walidamriou/ESP32_PWM_Generator_Arduino
  Copyright © 2020 Walid Amriou
  Last update: October 2020
 ********************************************************************
*/

#include <Arduino.h>
#include <ESP8266WiFi.h>

uint8_t LEDpin = 5; //5

/* By default PWM frequency is 1000Hz and we are using same 
   for this application hence no need to set */

void setup(){
  Serial.begin(115200);
  analogWriteFreq(1);
  //analogWriteRange(255);
}

void loop(){
  analogWrite(LEDpin, 512);  /* set initial 50% duty cycle */

}