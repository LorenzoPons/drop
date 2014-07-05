//char msg[] = "Hello World!";
byte msg = 9;
int ledPin = 13;

void setup(){
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  
  Serial.println(msg, DEC);
  digitalWrite(ledPin, HIGH);
  delay(250);
  digitalWrite(ledPin, LOW);
  delay(250);
  
}
