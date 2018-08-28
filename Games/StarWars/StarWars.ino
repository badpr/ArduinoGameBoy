#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

#define BUZZER 9 // Пин BUZZER
LiquidCrystal_I2C lcd(0x27,16,2); // Lcd Display

void setup()
{
  lcd.init();                     
  lcd.backlight();
}
void loop()
{
  if(millis()/1000 <= 10){
    lcd.setCursor(0, 0);
    lcd.print("BadProggers");
    lcd.setCursor(0, 1);
    lcd.print("Presents");
  }else{
    lcd.setCursor(0, 0);
    lcd.print("StarWars");
    lcd.setCursor(0, 1);
    lcd.print("Tap to play");
  }
}
