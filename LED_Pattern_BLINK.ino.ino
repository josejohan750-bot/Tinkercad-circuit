// C++ code for Blinking an LED using Arduino
//
 

void setup()//Runs once 
{
  pinMode( 2, OUTPUT);//Make pin 7 as an output pin for LED
   pinMode( 13, OUTPUT);//Make pin 1 as an output pin for LED
}



void loop()// Runs forever
{
 //Make LED1 low and LED2 High (0 1)
  digitalWrite(2, LOW);// Makes pin 7 high or 5v
  digitalWrite(13, HIGH);// Makes pin 1 high or 5v
  delay(2000); // Delay or wait for 100 milliseconds
  
  //(1 0)
  digitalWrite(2,HIGH); //Makes pin 7 low or 0v
  digitalWrite(13,LOW); //Makes pin 1 low or 0v
  delay(2000);
  
  //(1 1)
   digitalWrite(2, HIGH);// Makes pin 7 high or 5v
  digitalWrite(13, HIGH);// Makes pin 1 high or 5v
  delay(2000);
  
  //(0 0)
  digitalWrite(2, LOW);// Makes pin 7 high or 5v
  digitalWrite(13, LOW);// Makes pin 1 high or 5v
    delay(2000); // Delay a little bit to improve simulation performance
}