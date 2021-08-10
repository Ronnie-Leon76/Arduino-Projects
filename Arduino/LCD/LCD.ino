#include <Servo.h>

#include <LiquidCrystal_I2C.h>
int lightval;
int lightpin=A2;
int tm=100;
int servopin=11;
int angle;
Servo myservo;
LiquidCrystal_I2C lcd(0x27, 16 ,2);
void setup() {
  // put your setup code here, to run once:
  lightval=analogRead(lightpin);
  delay(tm);
  angle= lightval/5;
  myservo.write(angle);
  pinMode(lightpin,INPUT);
  myservo.attach(servopin);
  pinMode(servopin,OUTPUT);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Debbiiee!!");
  lcd.setCursor(1,1);
  lcd.print("Mystupid friend");
}

void loop() {
  // put your main code here, to run repeatedly:
  
  

}
