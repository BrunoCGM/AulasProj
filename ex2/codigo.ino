// C++ code
//
int led1 = 4;
int led2 = 2;

void setup ()
{
  pinMode (LED_BUILTIN, OUTPUT);
}

void loop ()
{
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
  
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW);
  delay(1000);
}
