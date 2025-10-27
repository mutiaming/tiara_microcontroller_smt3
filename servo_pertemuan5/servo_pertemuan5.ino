#include <Servo.h>

Servo motorservo;

#define pinMotorservo 3
#define pinbutton 2

void setup() {

  Serial.begin(9600);
  pinMode(pinbutton, INPUT_PULLUP);
  Serial.println("Program Motor servo");
  motorservo.attach(pinMotorservo);
  motorservo.write(0);
}

void loop() {
  // Serial.println("Servo 180 Derajat");
  // motorservo.write(180);  
  // delay(2000);

  // Serial.println("Servo 0 Derajat");
  // motorservo.write(0); 
  // delay(2000);

  if(digitalRead(pinbutton)==LOW){
    Serial.println("Servo 180 Derajat");
    motorservo.write(180);
  }else{
    Serial.println("Servo 0 Derajat");
    motorservo.write(0);
  }
  delay(200);
  
}
