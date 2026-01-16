#include "display.h"
#include "config.h"
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

static LiquidCrystal_I2C lcd(LCD_ADDR, LCD_COLS, LCD_ROWS);

void displayInit() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Sistem Aktif");
  delay(2000);
  lcd.clear();
}

void displayShowTopLine(int temperature, int humidity) {
  lcd.setCursor(0, 0);
  lcd.print("Isi:");
  lcd.print(temperature);
  lcd.print("C Nem:%");
  lcd.print(humidity);
}

void displayShowStatusClean(int gas) {
  lcd.setCursor(0, 1);
  lcd.print("Gaz: ");
  lcd.print(gas);
  lcd.print(" (TEMIZ)   ");
}

void displayShowStatusWarning() {
  lcd.setCursor(0, 1);
  lcd.print("DIKKAT! Koku Var ");
}

void displayShowStatusAlarm() {
  lcd.setCursor(0, 1);
  lcd.print("GAZ KACAGI !!!   ");
}
