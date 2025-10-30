int IN3 = 11;
int IN4 = 8;
int button = 12;

void setup() {
  Serial.begin(9600);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(button)==LOW){
    Serial.println("LOW");
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(1000);
  }else{
    Serial.println("HIGH");
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    delay(1000);
  }
}
