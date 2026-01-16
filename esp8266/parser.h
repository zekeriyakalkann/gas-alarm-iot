#pragma once
#include <Arduino.h>

struct AlarmPayload {
  bool isAlarm;
  String temperature;
  String humidity;
};

AlarmPayload parseLine(const String& line);
