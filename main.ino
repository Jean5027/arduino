const int botao = 6;
const int led = 10;

void setup()
{
  pinMode(led , OUTPUT);
  pinMode (botao , INPUT);
  
}

void loop()
{
  char dado = 'apagado';
  char estadoButton = digitalRead (botao);
  if ( estadoButton == HIGH && dado == 'apagado') { 
    digitalWrite(led , HIGH);
    char dado = 'aceso';
  }
  else if ( estadoButton == HIGH && dado == 'aceso') {
    digitalWrite (led , LOW );
    char dado = 'apagado';
  }
}