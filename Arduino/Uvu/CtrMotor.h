#pragma once
#include "Motor.h"
#include "arduino.h"

#define DEFAULTSPEED 200 //default speed, can be changed if needed.

class CtrMotor
{
private:
    int in1, in2, PWM, offset;
    void fwd(int speed);
	void rev(int speed);
public:
    CtrMotor(); //blank constructor to appease Arduino
    ~CtrMotor();
    Motor CreateMotor(int In1pin, int In2pin, int PWMpin, int offset);
    //foundational method for driving the bot. Called by forward.
    void Drive(int speed, Motor motor); 
    void Drive(int speed, double duration, Motor motor);
    
    void Brake(Motor motor);
    //is commented out as Standby is the absence of movement.
    // void Standby(Motor motor);
    void Forward(Motor motor1, Motor motor2);
    void Forward(Motor motor1, Motor motor2, int speed);//same as drive, with double motor
    void Backward(Motor motor1, Motor motor2, int speed);
    void Left(Motor left, Motor right, int speed);
    void Right(Motor left, Motor right, int speed);
    //will likely be a switch with direction based on the variable on the object.
    void Drive(Direction direction, Motor left, Motor right);
};

