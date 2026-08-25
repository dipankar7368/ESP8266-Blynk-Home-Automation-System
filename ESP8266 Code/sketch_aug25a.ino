#define BLYNK_PRINT Serial

#define BLYNK_TEMPLATE_ID "Your Template Id"
#define BLYNK_TEMPLATE_NAME "WIFI RELAY CONTROLLER"
#define BLYNK_AUTH_TOKEN "Your Auth Token"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char ssid[] = "Your Wifi SSID";
char pass[] = "Your Wifi Password";

// Relay pins
int relayPins[4] = {D1, D2, D5, D6};

void setup() {
  Serial.begin(115200);

  for (int i = 0; i < 4; i++) {
    pinMode(relayPins[i], OUTPUT);
    digitalWrite(relayPins[i], HIGH); // OFF
  }

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

// Relay controls
BLYNK_WRITE(V0) {
  digitalWrite(relayPins[0], param.asInt() ? LOW : HIGH);
}

BLYNK_WRITE(V1) {
  digitalWrite(relayPins[1], param.asInt() ? LOW : HIGH);
}

BLYNK_WRITE(V2) {
  digitalWrite(relayPins[2], param.asInt() ? LOW : HIGH);
}

BLYNK_WRITE(V3) {
  digitalWrite(relayPins[3], param.asInt() ? LOW : HIGH);
}

void loop() {
  Blynk.run();
}
