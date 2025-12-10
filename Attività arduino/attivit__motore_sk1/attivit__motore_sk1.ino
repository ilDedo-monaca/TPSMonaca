int pinvel = 6;
int IN1 = 4;
int IN2 = 5; 
void setup() {   
  pinMode(enablePin, OUTPUT);   
  pinMode(IN1, OUTPUT);   
  pinMode(IN2, OUTPUT);   
  digitalWrite(IN1, HIGH);   
  digitalWrite(IN2, LOW); 
  } 
  void loop() {   
    for (int velo = 0; velo <= 255; velo+=5) 
    {     
      analogWrite(pinvel, velo);     
      delay(100);   
    }   
    for (int velo = 255; velo >= 0; velo-=5) 
    {     
      analogWrite(pinvel, velo);     
      delay(100);   
    } 
  }
 