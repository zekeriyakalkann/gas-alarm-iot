#pragma once
#include <Arduino.h>

void displayInit();
void displayShowTopLine(int temperature, int humidity);
void displayShowStatusClean(int gas);
void displayShowStatusWarning();
void displayShowStatusAlarm();
//Updated 
