

#include <Servo.h> //include servo library

Servo servo1;  // create servo object to control a servo
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

int pos = 0;    // variable to store the servo position


void setup() {
  
  servo1.attach(3);  // attaches the servo to digital pin
  
  servo2.attach(5);
  
  servo3.attach(6);
  
  servo4.attach(9);
  
  servo5.attach(10);
  

}

void loop() {
  for (pos = 0; pos <= 90;pos += 1) { // goes from 0 degrees to 180 degrees, in steps of 1 degree
                 
  servo1.write(pos);   // tell servo to go to position in variable 'pos'               
  servo2.write(pos);
  servo3.write(pos);
  servo4.write(pos);
  servo5.write(pos);
    delay(10);            // waits for the servo to get there

  }
  
  for (pos = 90;pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees, in steps of 1 degree
                 
  servo1.write(pos);   // tell servo to go to position in variable 'pos'               
  servo2.write(pos);
  servo3.write(pos);
  servo4.write(pos);
  servo5.write(pos);
    delay(10);                        // waits for the servo to get there
  }
}
