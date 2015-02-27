int a = 3;
int b = 4;
int h = sqrt(sq(a)+sq(b);

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  Serial.println("Here is some math: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("h = ");
  Serial.println(h);

  Serial.print("h =  ");       // add
  Serial.println(h = a + b);


}

void loop()  // we need this to be here even though its empty
{
}

