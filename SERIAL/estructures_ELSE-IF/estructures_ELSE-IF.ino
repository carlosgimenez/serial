int Indicador  = 30;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( Indicador  < 3.5)
  {
    Serial.print("A");
  } 
  else if ( Indicador  <6.5) 
  {
    Serial.print("B");
  }
  else if (  Indicador  <11.1 )
  {
    Serial.print("C");
  }
  else if (  Indicador  <17.7 )
  {
    Serial.print("D");
  }
  else if (  Indicador  <38.2 )
  {
    Serial.print("E");
  }
  else if (  Indicador  <43.2 )
  {
    Serial.print("F");
  }
  else if (  Indicador  >=43.2 )
  {
    Serial.print("G");
  }
  
}

void loop()   // we need this to be here even though its empty
{
}

