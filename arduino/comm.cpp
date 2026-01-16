#include "comm.h"
#include "config.h"
#include <SoftwareSerial.h>

static SoftwareSerial espSerial(ESP_RX_PIN, ESP_TX_PIN);

void commInit(long baud) {
  espSerial.begin(baud);
}

void commSendAlarm(int temperature, int humidity) {
  // "ALARM,24,50"
  espSerial.print("ALARM,");
  espSerial.print(temperature);
  espSerial.print(",");
  espSerial.println(humidity);
}
