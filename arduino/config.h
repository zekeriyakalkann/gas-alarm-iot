#pragma once
#include <Arduino.h>

// --- PINLER ---
const int GAZ_SENSOR_PIN = A0;

#define DHTPIN 4
#define DHTTYPE DHT11

const int LED_KIRMIZI = 8;
const int LED_SARI    = 9;
const int LED_YESIL   = 10;
const int BUZZER_PIN  = 11;

// SoftwareSerial (UNO): RX, TX
const int ESP_RX_PIN = 2;
const int ESP_TX_PIN = 3;

// LCD I2C
const uint8_t LCD_ADDR = 0x27;
const uint8_t LCD_COLS = 16;
const uint8_t LCD_ROWS = 2;

// Eşik ve zamanlama
const int ESIK_DEGER = 700;
const int HISTERESIS = 50;

const unsigned long BILDIRIM_ARALIGI_MS = 15000;
const unsigned long LOOP_DELAY_MS = 200;
