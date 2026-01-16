#include "actuators.h"
#include "config.h"

void actuatorsInit() {
  pinMode(LED_KIRMIZI, OUTPUT);
  pinMode(LED_SARI, OUTPUT);
  pinMode(LED_YESIL, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  alarmSoundOff();
}

void setCleanMode() {
  digitalWrite(LED_YESIL, HIGH);
  digitalWrite(LED_SARI, LOW);
  digitalWrite(LED_KIRMIZI, LOW);
}

void setWarningMode() {
  digitalWrite(LED_YESIL, LOW);
  digitalWrite(LED_SARI, HIGH);
  digitalWrite(LED_KIRMIZI, LOW);
}

void setAlarmMode() {
  digitalWrite(LED_YESIL, LOW);
  digitalWrite(LED_SARI, LOW);
  digitalWrite(LED_KIRMIZI, HIGH);
}

void alarmSoundOn() {
  tone(BUZZER_PIN, 1000);
}

void alarmSoundOff() {
  noTone(BUZZER_PIN);
}
