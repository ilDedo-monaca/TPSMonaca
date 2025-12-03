int led = 13; 

void setup() {
  pinMode(led, OUTPUT);  
}

void loop() {
  digitalWrite(led, HIGH);  
  delay(30000);             // 30000 millisecondi

  digitalWrite(led, LOW);  
  delay(30000);            
}
