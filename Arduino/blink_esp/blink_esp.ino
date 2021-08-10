#include <CertStoreBearSSL.h>
#include <WiFiServerSecureBearSSL.h>
#include <WiFiClientSecure.h>
#include <ESP8266WiFi.h>
#include <BearSSLHelpers.h>
#include <ESP8266WiFiScan.h>
#include <ESP8266WiFiSTA.h>
#include <WiFiClient.h>
#include <WiFiServer.h>
#include <ESP8266WiFiGratuitous.h>
#include <ESP8266WiFiAP.h>
#include <WiFiServerSecure.h>
#include <ArduinoWiFiServer.h>
#include <ESP8266WiFiGeneric.h>
#include <WiFiUdp.h>
#include <WiFiClientSecureBearSSL.h>
#include <ESP8266WiFiType.h>
#include <ESP8266WiFiMulti.h>

const char *ssid = "Onyi";
const char *pass = "3169.elliv";

WiFiClient client;



#define LED1 D1

void setup() {
  
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
      Serial.println("");
      Serial.println("WiFi connected"); 

}

void loop() {
  
  

}
//ypo0YRPYooNlcd-KOPjftmmjzv8ooKAY
