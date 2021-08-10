#include "DHT.h"

#define DHTPIN 9     // what pin we're connected to

int RelayPin=8;

#define DHTTYPE DHT11   // DHT 11 

// Initialize DHT sensor for normal 16mhz Arduino
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600); 
  Serial.println("DHTxx test!");
  pinMode(RelayPin,OUTPUT);
 
  dht.begin();
}

void loop() {
  // Wait a few seconds between measurements.
  delay(2000);

  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  float h = dht.readHumidity();
  // Read temperature as Celsius
  float t = dht.readTemperature();
  
  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
if (t<20){
  digitalWrite(RelayPin,LOW);
  }
  else{
    digitalWrite(RelayPin,HIGH);
  }
Serial.print("Humidity= ");
Serial.println(h);
Serial.print("Temperature= ");
Serial.print(t);
  
}
