#include <Arduino.h>
#include <M5StickCPlus.h>

void setup() {
  M5.begin();
  M5.Lcd.setTextSize(3);
  M5.Lcd.setRotation(3);
  M5.Lcd.print("Hello world");
}

void loop() {
}