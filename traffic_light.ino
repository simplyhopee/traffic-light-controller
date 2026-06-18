#include <Servo.h>
Servo myServo;
// Current position
int pos = 0;
void setup() 
{
  myServo.attach(9);
}

void loop() 
{
  // Sweep from 0 to 180 degrees
  for (pos = 0; pos <= 180; pos++) 
  {
    myServo.write(pos);
    // Wait for servo to reach position
    delay(15);
    // servos aren't instant
    // Can adjust delay for speed 
    // too fast = jerky, too slow = boring
  }
  
  // Sweep from 180 back to 0 degrees
  for (pos = 180; pos >= 0; pos--) 
  {
    myServo.write(pos);
    delay(15);
  }
}
