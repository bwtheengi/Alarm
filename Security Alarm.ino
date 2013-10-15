int someoneThere;

void setup()
{
Serial.begin(9600);  
pinMode (6,INPUT);
pinMode (9,OUTPUT);
delay(10000);
}

void loop()
{
  someoneThere = digitalRead(6);
  if ( someoneThere > 0 )
  {
    Serial.println("Alert! Send the Hounds!");
    digitalWrite(9,HIGH);
  }
  else
  {
    Serial.println("All clear");
    digitalWrite (9,LOW);
  }

delay(100);
  
}

