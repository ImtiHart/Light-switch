int x;
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}
void loop()
{
  x = analogRead(A0);
  if(x>0&&x<550)
  {
      while(x>0&&x<550)
    {
      digitalWrite(8,HIGH);
      x = analogRead(A0);
      Serial.println("ON");
      delay(250);
    }
  }
  else
  {
    digitalWrite(8,LOW);
    Serial.println("OFF");
  }
}