#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "";
char ssid[] = "indihome";
char pass[] = "ahyasatari21";

void setup()
{
  // Debug console
  Serial.begin(9000);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
