
int SensorPin =A0;
int PumpPin=9;
int sensorValue;
int limit=100;
int LED3=13;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (PumpPin, OUTPUT);
  //pinMode (LED3,OUTPUT);
  //digitalWrite (PumpPin,HIGH);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite (PumpPin, HIGH);
  //delay (500);
  sensorValue=analogRead (SensorPin);
  Serial.println("Analog value: ");
  Serial.println(sensorValue);
  delay(300);

  if(sensorValue<limit){
    digitalWrite (PumpPin, LOW);
    }
   else{
      digitalWrite (PumpPin, HIGH);
   }

}
