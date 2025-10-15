#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define solenoidPin 6

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "_nGJR5GIu9Q6Z0RuW-d5SUBsRcaC9F-y";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "deepanshu";
char pass[] = "deepanshu123";
 
int zero = 0;
int one = 1;
 
void setup() 
{
  Serial.begin(115200);
  pinMode(solenoidPin,OUTPUT);
  Blynk.begin(auth, ssid, pass);
}
 

void loop() 
{
  int abot;
  if (abot == 10)
  {
  analogWrite(solenoidPin,10);
  delay(20);
  }
  Serial.print("Pressure= ");
  Serial.print(25);  // prints a label
  Serial.print("Volume");
  Serial.print(471);  
  Serial.print("\n");     
  delay(100000);
  
  if (abot == 10)
  {
  analogWrite(solenoidPin,20);
  delay(20);
  }
  
  
  if (abot == 30)
  {
  analogWrite(solenoidPin,30);
  delay(20);
  }
  
 
  if (abot == 40)
  {
  analogWrite(solenoidPin,40);
  delay(20);
  }
  
  if (abot == 50)
  {
  analogWrite(solenoidPin,50);
  delay(20);
  }
  Blynk.run();  
}
