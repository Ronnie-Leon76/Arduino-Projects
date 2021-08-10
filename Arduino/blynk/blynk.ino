// Blynk 4 ch Relay
//By novatech.co.ke

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "SephKYk5hagjTkoCKQelHoUnOfsJCepJ";
const char *ssid =  "Onyi";     // replace with your wifi ssid and wpa2 key
const char *pass =  "3169.elliv";


WiFiClient client;
 
void setup() 
{
       Serial.begin(9600);
       delay(10);
               
       Serial.println("Connecting to ");
       Serial.println(ssid); 
 
       WiFi.begin(ssid, pass); 
       while (WiFi.status() != WL_CONNECTED) 
          {
            delay(500);
            Serial.print(".");
          }
      Serial.println("vvv");
      Serial.println("WiFi connected"); 
      pinMode(D1,OUTPUT); //extend these to D8 if you are using a 8 pin relay
      pinMode(D2,OUTPUT);
      pinMode(D3,OUTPUT);
      pinMode(D4,OUTPUT);
      digitalWrite(D1,HIGH); // Make it low if you want everything to go off
      digitalWrite(D2,HIGH); // in case of a power cut
      digitalWrite(D3,LOW);
      digitalWrite(D4,HIGH);
      Blynk.begin(auth, ssid, pass);
}
 
void loop() 
{      
  Blynk.run();
}
