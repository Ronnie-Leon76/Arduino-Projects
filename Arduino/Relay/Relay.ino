//control relay by serial monitor by Novatech.co.ke
int RelayPin=8;
void setup() {
  // put your setup code here, to run once:
pinMode (RelayPin, OUTPUT);
Serial.begin(9600);
Serial.println (" Enter 1 to switch lamp on");

}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available ()){
    char inChar =(char)Serial.read();
    if (inChar =='1'){
      digitalWrite (RelayPin, HIGH);
      Serial.println(" Lamp is on!");
    }
    else if (inChar == '0'){
      digitalWrite (RelayPin, LOW);
       Serial.println(" Lamp is off!");}
       else {
        Serial. println (" Invalid input!");
       }

      
    }
  }
/*digitalWrite (RelayPin, LOW);
delay(1000);
digitalWrite (RelayPin, HIGH);
delay(1000);
*/
//}
