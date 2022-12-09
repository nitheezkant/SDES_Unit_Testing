void setup() {
  pinMode(12,OUTPUT);pinMode(11,OUTPUT);pinMode(10,OUTPUT);
  pinMode(A0,INPUT); 
  Serial.begin(9600);
}
void loop() {
  Serial.println(analogRead(0));
  if(analogRead(0)>500){
    digitalWrite(10,LOW);digitalWrite(11,HIGH);digitalWrite(12,LOW);
  }
  else{
    digitalWrite(10,LOW);digitalWrite(11,LOW);digitalWrite(12,LOW);
  }
}
