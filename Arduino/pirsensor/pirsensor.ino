int ledPin=13;
int inputPin=3;
int pirState=LOW;
int val=0;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  val=digitalRead(inputPin);
  if (val==HIGH)
  {
    digitalWrite(ledPin, HIGH);
    if (pirState==LOW)
    {
      Serial.println("Motion Detected");
      pirState=HIGH;
    }
  }
  else if( val==LOW)
  {
    digitalWrite(ledPin, LOW);
    if (pirState==LOW)
    {
      Serial.println("Motion ended");
      pirState=LOW;
    }
  }

}
