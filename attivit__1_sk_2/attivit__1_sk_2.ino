int led1 = 2;  
int led2 = 3;   
int led3 = 4;   
int led4 = 5;   

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

  randomSeed(analogRead(A0)); 
}

void loop() {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);


  int scelta = random(1, 5); 

  if (scelta == 1) digitalWrite(led1, HIGH);
  if (scelta == 2) digitalWrite(led2, HIGH);
  if (scelta == 3) digitalWrite(led3, HIGH);
  if (scelta == 4) digitalWrite(led4, HIGH);

  delay(30000); // millisecondi
}
