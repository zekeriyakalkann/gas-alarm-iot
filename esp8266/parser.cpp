#include "parser.h"

AlarmPayload parseLine(const String& line) {
  AlarmPayload p;
  p.isAlarm = false;
  p.temperature = "0";
  p.humidity = "0";

  String s = line;
  s.trim();

  if (!s.startsWith("ALARM")) return p;

  int v1 = s.indexOf(',');
  int v2 = s.indexOf(',', v1 + 1);

  p.isAlarm = true;

  if (v1 > 0 && v2 > 0) {
    p.temperature = s.substring(v1 + 1, v2);
    p.humidity = s.substring(v2 + 1);
  }

  return p;
}
