
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "EMLQEluyhv-DFtKSnQwRh97PMoDZWQpI";
char ssid[] = "Gazebo";
char pass[] = "juli2020";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);

}

void loop()
{
  Blynk.run();
}
