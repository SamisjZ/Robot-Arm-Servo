# Robot-Arm-Servo
controlling servo motors for robot arm project with smart methods company

this is the electronic part of the robot arm project
using 5 servo motors to control the joints of the robot arm  using potentiometer in 90 degrees range


see the circuit connections  of the servo motors with potentiometer in this file "servo arm circuit diagram.png"

in the circuit:

1- I connect all the servo motors to the power +battry and -battry and the GND of arduino to -battry, and connect the signal wires of the servo to the arduino PWM pins (3,5,6,9,10,11) .

2- connecting the power +battry and -battry to the terminal 1 and 2 of the Potentiometer, then connect the wiper of the potentiometer in analog pins (5,4,3,2,1).

in the code file "servo_Arm.ino" you will find a discription for the steps.

after conneecting the circuit and run the code you can control the servo with the potentiometer from 90 degree angle to 0 degree angle as in the next picture

<img width="511" alt="servo arm controlled circuit" src="https://user-images.githubusercontent.com/86025722/122647833-d3614480-d12e-11eb-8287-63647509f221.PNG">


"servo arm circuit.brd" is ciruit file need eagle autodisk or altium 365 or any program read the extrintion .brd
