// C++ code for Blinking an LED using Arduino 

void setup()//Runs once 
{
  pinMode( 7, OUTPUT);//Make pin 7 as an output pin for LED
}



void loop()// Runs forever
{
  digitalWrite(7, HIGH);// Makes pin 7 high or 5v
  delay(1000); // Delay or wait for 1000 milliseconds
  digitalWrite(7,LOW); //Makes pin 7 low or 0v
  delay(1000); // Delay or wait for 1000 milliseconds
}
