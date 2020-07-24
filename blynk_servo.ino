#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

#define BLYNK_PRINT Serial


Servo servo;
char auth[] = "ur token";
char ssid[] = "ur wifi name";
char pswd[] = "ur wifi password";

void setup() {
 Serial.begin(9600);
 Blynk.begin(auth,ssid,pswd);
 servo.attach(15); //D4

}

void loop() {
Blynk.run();
}

BLYNK_WRITE(V1) {
  servo.write(param.asInt());
}
