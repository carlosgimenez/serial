void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
}

void loop()                 // run over and over again
{
  Serial.println("Escull el numero de la operacio que vols realitzar?");  // prints hello
  delay(1000);
  Serial.println("1-Comprovar numero de targeta de credit");  // prints hello
  delay(1000);
  Serial.println("2-Comprovar numero de compte bancari");  // prints hello
  delay(1000);
  Serial.println("3-Buscar un digit perdut de la targeta de credit");  // prints hello
   delay(1000);
}

