#pragma once
#include <Arduino.h>

void commInit(long baud);
void commSendAlarm(int temperature, int humidity);
