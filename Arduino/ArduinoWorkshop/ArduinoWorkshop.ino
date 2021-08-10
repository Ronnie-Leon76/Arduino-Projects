
#define echoPin 9
#define trigPin 10
long duration;
int distance;
int BuzzerPin=8;
int limit=150;
int LED3=13;


void setup() {
  // put your setup code here, to run once:
  pinMode(LED3,OUTPUT);
  pinMode (trigPin,OUTPUT);
  pinMode (echoPin,INPUT);
  pinMode (BuzzerPin, OUTPUT);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (trigPin,LOW);
  delay (500);
  digitalWrite (trigPin,HIGH);
  delay (10);
  digitalWrite (trigPin,LOW);
  duration = pulseIn(echoPin,HIGH);
  distance = duration*0.034/2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");

   if(distance>limit){
      digitalWrite (BuzzerPin, HIGH);
      delay (500);
      digitalWrite (BuzzerPin, LOW);
    }
   else{
      digitalWrite (LED3, HIGH);
      digitalWrite (BuzzerPin, LOW);
      }
    
  
  

}
