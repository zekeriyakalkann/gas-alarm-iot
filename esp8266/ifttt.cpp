#include "ifttt.h"
#include "secrets.h"
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <WiFiClient.h>

void sendIfttt(const String& temperature, const String& humidity) {
  if (WiFi.status() != WL_CONNECTED) return;

  WiFiClient client;
  HTTPClient http;

  String url = String("http://maker.ifttt.com/trigger/") + IFTTT_EVENT + "/with/key/" + IFTTT_KEY;
  url += "?value1=" + temperature + "&value2=" + humidity;

  http.begin(client, url);
  http.GET();
  http.end();
}
