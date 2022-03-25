// C++ code
//

int laranja = 4;
int vermelho = 8;
int azul = 11;
int verde = 6;
int branco = 1;

void setup()
{
pinMode (laranja, OUTPUT) ;
pinMode (branco, OUTPUT) ;
pinMode (azul, OUTPUT) ;
pinMode (vermelho, OUTPUT) ;
pinMode (verde, OUTPUT) ;
}

void loop()
{
  
  delay(1000);
  digitalWrite (vermelho, HIGH);
  delay(2000);
  digitalWrite (laranja, HIGH);
  delay(1000);
  digitalWrite (azul, HIGH);
  delay(1000);
  digitalWrite (verde, HIGH);
  delay(1000);
  digitalWrite (branco, HIGH);
  delay(1000);
  
  digitalWrite (laranja, LOW);
  digitalWrite (azul, LOW);
  digitalWrite (verde, LOW);
  digitalWrite (branco, LOW);
  digitalWrite (vermelho, LOW);
  
}
