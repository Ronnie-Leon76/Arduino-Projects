#include <DHT_U.h>
#include <DHT.h>
#define DHTPIN 10
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  float hum=dht.readHumidity();
  float temp=dht.readTemperature();
  float fah=dht.readTemperature(true);
  if(isnan(hum)|| isnan(temp)||isnan(fah)){
      Serial.println(F("Failed to read from DHT sensor"));
      return;
   }
   float hif = dht.computeHeatIndex(fah,hum);
   float hic = dht.computeHeatIndex(temp,hum,false);
   
   Serial.print(F("Humdity: "));
   Serial.println(hum);
   
   
   Serial.print(F("% Temperature: "));
   Serial.println(temp);
   
   
   Serial.print(F("Heat index in celcius"));
   Serial.println(hic);
   
   
   Serial.print(F("Heat index in Farenheit"));
   Serial.println(hif);
   delay(5000);
   



   
    
}
