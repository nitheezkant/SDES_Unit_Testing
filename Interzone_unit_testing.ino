void setup() {
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);

}


void loop() {
  Serial.println(0);
  digitalWrite(10,LOW);digitalWrite(11,LOW);digitalWrite(12,LOW);delay(30000);
    Serial.println(1);

    digitalWrite(10,LOW);digitalWrite(11,LOW);digitalWrite(12,HIGH);delay(30000);
  Serial.println(2);

  digitalWrite(10,LOW);digitalWrite(11,HIGH);digitalWrite(12,LOW);delay(30000);
  Serial.println(3);

  digitalWrite(10,LOW);digitalWrite(11,HIGH);digitalWrite(12,HIGH);delay(30000);
  
  Serial.println(4);
  digitalWrite(10,HIGH);digitalWrite(11,LOW);digitalWrite(12,LOW);delay(30000);
  Serial.println(5);

  digitalWrite(10,HIGH);digitalWrite(11,LOW);digitalWrite(12,HIGH);delay(30000);
  Serial.println(6);

  digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,LOW);delay(30000);

}
