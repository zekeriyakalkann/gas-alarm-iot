#include "secrets.h"
#include "parser.h"
#include "ifttt.h"
#include <ESP8266WiFi.h>

void setup() {
  Serial.begin(9600);

  WiFi.begin(WIFI_SSID, WIFI_PASS);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }
}

void loop() {
  if (Serial.available() > 0) {
    String line = Serial.readStringUntil('\n');
    AlarmPayload p = parseLine(line);

    if (p.isAlarm) {
      sendIfttt(p.temperature, p.humidity);
      delay(5000);
    }
  }
}
