#include "arduino.h"
#include "Motor.h"

//Pins for the shield. 
#define PWMA 3 
#define A1N2 13
#define A1N1 12
#define B1N1 10
#define B1N2 8
#define PWMB 9
//ofset is used to switch directions if needed from software instead of hardware.
#define OFFSET 1
//defined outside of Setup so i can use it in Loop in Visual Code.
Motor motorLeft = Motor(A1N1, A1N2, PWMA, OFFSET);
Motor motorRight = Motor(B1N1, B1N2, PWMB, OFFSET);

void setup(){
    //setup things before the program can run.
    
}
void loop(){
    //test of individual motors.
    motorLeft.Drive(255, 1000);
    motorRight.Drive(255, 1000);
    //test of both motors. Though this is called on one motor for some reason.
    //this would be changed with a controller that has functions, and not a motor.
    //motorLeft.Forward(motorLeft, motorRight);
    //delay(1000);
    //motorLeft.Backward(motorLeft, motorRight, DEFAULTSPEED);
    //delay(1000);
}
