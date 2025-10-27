#define pinButton 2
#define pinLed 3
#define pinLed2 11
#define pinPotensio A2

void setup() {
  Serial.begin(9600);
  pinMode(pinButton, INPUT_PULLUP);
  pinMode(pinLed, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  // put your setup code here, to run once:

  

  // Serial.println("Sudah terbiasa terjadi tante..");
  // delay(6000);
  // Serial.println("Teman datang ketika lagi butuh saja..");
  // delay(3000);
  // Serial.println("Coba kalo lagi susah..");

}

void loop() {

  // Serial.print("Nilai Push Button: ");
  // Serial.println(digitalRead(pinButton));
  // Serial.print("Nilai Potensio Meter: ");
  // Serial.println(analogRead(pinPotensio));
  int potensio = analogRead(pinPotensio);
  if(digitalRead(pinButton)==LOW){
    digitalWrite(pinLed, HIGH);
    // Serial.println("LED ON");
  }else{
    digitalWrite(pinLed, LOW);
    // Serial.println("LED OFF");
  }
  delay(200);

  analogWrite(pinLed2, (potensio / 4));




  // put your main code here, to run repeatedly:

}
