

#include <Servo.h> //include servo library

Servo servo1;  // create servo object to control a servo
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

int ptpin1 = 5;  // analog pin used to connect the potentiometer
int val1;    // variable to read the value from the analog pin

int ptpin2 = 4;
int val2;

int ptpin3 = 3;
int val3;

int ptpin4 = 2;
int val4;

int ptpin5 = 1;
int val5;


void setup() {
  
  servo1.attach(3);  // attaches the servo on pin with a pwm
   
  servo2.attach(5);
  
  servo3.attach(6);
  
  servo4.attach(9);
  
  servo5.attach(10);
 
}

void loop() {
  val1 = analogRead(ptpin1);            // reads the value of the potentiometer (value between 0 and 1023)
  val1 = map(val1, 0, 1023, 90, 0);     // scale it to use it with the servo (angle value at 90 and 180 becuse we want its movment in 90 degrees range, so any 90 degrees range will work)
  servo1.write(val1);                  // sets the servo position according to the scaled value                          

  val2 = analogRead(ptpin2);
  val2 = map(val2, 0, 1023, 90, 0);
  servo2.write(val2); 

  val3 = analogRead(ptpin3);
  val3 = map(val3, 0, 1023, 90, 0);
  servo3.write(val3); 

  val4 = analogRead(ptpin4);
  val4 = map(val4, 0, 1023, 90, 0);
  servo4.write(val4);

  val5 = analogRead(ptpin5);
  val5 = map(val5, 0, 1023, 90, 0);
  servo5.write(val5);
  delay(10);                           // waits for the servo to get there
  
}
