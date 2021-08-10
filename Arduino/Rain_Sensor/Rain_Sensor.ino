const int capteur_D=4;
const int capteur_A=A0;
int val_analogique;


void setup() {
  // put your setup code here, to run once:
  pinMode(capteur_D,INPUT);
  pinMode(capteur_A,INPUT);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(capteur_D) == LOW){
    Serial.println("Digital Value: wet");
    delay(10);
    }
    else {
      Serial.println("Digital value: dry");
      delay(10);
      }
      val_analogique=analogRead(capteur_A);
      Serial.print("Analogue value: ");
      Serial.println(val_analogique);
      Serial.println("");
      delay(1000);

}
