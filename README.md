# Robot-Arm-Servo
controlling servo motors for robot arm project with smart methods company

this is the electronic part of the robot arm project
using 5 servo motors to control the joints of the robot arm  using potentiometer in 90 degrees range


see the circuit connections  of the servo motors with potentiometer in this file "circuit Robot Arm Servo Motors with potentiometer.png "

and go to this link for simulation results  https://www.tinkercad.com/things/7f6PMEiOJNA-robot-arm-servo-motors-with-potentiometer-

in the potrniometer circuit: 

1- I connect all the servo motors to the power +battry and -battry and the GND of arduino to -battry, and connect the signal wires of the servo to the arduino PWM pins (3,5,6,9,10,11) .

2- connecting the power +battry and -battry to the terminal 1 and 2 of the Potentiometer, then connect the wiper of the potentiometer in analog pins (5,4,3,2,1).

in the code file "servo_Arm.ino" you will find a discription for the steps.

after conneecting the circuit and run the code you can control the servo with the potentiometer from 90 degree angle to 0 degree angle as in the next picture

<img width="530" alt="circuit Robot Arm Servo Motors with controlled potentiometer " src="https://user-images.githubusercontent.com/86025722/123190536-5fb19580-d4a8-11eb-9518-ea9c53e53524.png">




in the auto sweep 90 degree circuit its easier, see the connection in the file "circuit 90 degree Robot Arm Servo Motors.png"

1- I connect all the servo motors to the power +battry and -battry and the GND of arduino to -battry, and connect the signal wires of the servo to the arduino PWM pins (3,5,6,9,10,11) 

in the code file "servo_Arm_90.ino" you will find a discription for the steps.

then go to this link for simulation results  https://www.tinkercad.com/things/3XWWv9oVyDx-90-degree-robot-arm-servo-motors

