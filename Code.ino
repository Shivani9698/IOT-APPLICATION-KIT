#define BLYNK_TEMPLATE_ID "TMPL3N8JulGk7"
#define BLYNK_TEMPLATE_NAME "IOT APPLICATION KIT"
#define BLYNK_AUTH_TOKEN "CdpkJKwy2rY7eHTC-KKIibjBURyX6jxg"
// Comment this out to disable prints and save space
#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = BLYNK_AUTH_TOKEN;

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "FTTHBSNL";
char pass[] = "29915693";
 
BlynkTimer timer;

void setup()
{
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  
  pinMode(2, OUTPUT); // For Bulb 1
  pinMode(4, OUTPUT); // For Bulb 2
  pinMode(5, OUTPUT); // For Bulb 3
  pinMode(15, OUTPUT); // For Fan
  pinMode(13, OUTPUT); // For Buzzer
  pinMode(12, OUTPUT); // For Relay
}

BLYNK_WRITE(V0) {
  int pinValue = param.asInt();
  Serial.println(pinValue);
  digitalWrite(2, pinValue);
}

BLYNK_WRITE(V1) {
  int pinValue = param.asInt();
  Serial.println(pinValue);
  digitalWrite(4, pinValue);
}

BLYNK_WRITE(V2) {
  int pinValue = param.asInt();
  Serial.println(pinValue);
  digitalWrite(5, pinValue);
}

BLYNK_WRITE(V3) {
  int pinValue = param.asInt();
  Serial.println(pinValue);
  digitalWrite(15, pinValue);
}

BLYNK_WRITE(V4) {
  int pinValue = param.asInt();
  Serial.println(pinValue);
  digitalWrite(13, pinValue);
}

BLYNK_WRITE(V5) {
  int pinValue = param.asInt();
  Serial.println(pinValue);
  digitalWrite(12, pinValue);
}

void loop()
{ 
  Blynk.run();
  delay(2000);
}
