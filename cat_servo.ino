#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
 
void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
} 
 
void loop()
{  
  delay(5000);
  myservo.write(0);                 
  delay(2000);
  myservo.write(45);
  delay(2000);   // waits for the servo to get there 
  myservo.write(90); 
  delay(150000);
  myservo.write(45);                 
  delay(2000);
  myservo.write(0); 
  delay(50000);
} 
