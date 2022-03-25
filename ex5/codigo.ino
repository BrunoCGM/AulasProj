// C++ code
//
void setup()
{
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  int var = digitalRead(2);
  if (var) {
    digitalWrite (3, LOW);
  }else{
    digitalWrite (3, HIGH);
}
}
