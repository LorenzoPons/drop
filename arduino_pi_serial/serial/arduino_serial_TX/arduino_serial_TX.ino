char msg[] = "Hello World!";

void setup(){
  Serial.begin(9600);
}

void loop(){
  if (Serial.available()){
    Serial.println(msg);
    delay(500);
  }
}
