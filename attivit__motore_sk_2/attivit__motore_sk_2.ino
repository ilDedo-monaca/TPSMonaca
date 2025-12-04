
void setup() {
  pinMode(7,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  static char temp;
  static bool successo=false;
  static String testo;
  digitalWrite(7,1);
  digitalWrite(4,0);
  

  while (Serial.available()>0)
  {
    
    temp=(char)Serial.read();
    
    if(temp == '\n')
    {
      
      successo=true;
      break;

    }
    else
    {
      testo=testo+temp;
      
    }
  }
  if(successo==true)
  {
    Serial.println(testo);
    analogWrite(6,testo.toInt());
    successo=false;
  }
  
  
}
