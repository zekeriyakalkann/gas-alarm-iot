#include "config.h"
#include "sensors.h"
#include "display.h"
#include "actuators.h"
#include "comm.h"
#include "logic.h"

unsigned long lastNotifyMs = 0;

void setup() {
  Serial.begin(9600);

  sensorsInit();
  displayInit();
  actuatorsInit();
  commInit(9600);
}

void loop() {
  SensorData d = sensorsRead();

  // PC takip
  Serial.print("Gaz:"); Serial.print(d.gas);
  Serial.print(" Sicaklik:"); Serial.print(d.temperature);
  Serial.print(" Nem:"); Serial.println(d.humidity);

  // LCD üst satır
  displayShowTopLine(d.temperature, d.humidity);

  SystemState st = decideState(d.gas);

  if (st == STATE_CLEAN) {
    setCleanMode();
    alarmSoundOff();
    displayShowStatusClean(d.gas);
  }
  else if (st == STATE_WARNING) {
    setWarningMode();
    alarmSoundOff();
    displayShowStatusWarning();
  }
  else { // STATE_ALARM
    setAlarmMode();
    alarmSoundOn();
    displayShowStatusAlarm();

    unsigned long now = millis();
    if (now - lastNotifyMs >= BILDIRIM_ARALIGI_MS) {
      Serial.println("Veriler ESP'ye gonderiliyor...");
      commSendAlarm(d.temperature, d.humidity);
      lastNotifyMs = now;
    }
  }

  delay(LOOP_DELAY_MS);
}

