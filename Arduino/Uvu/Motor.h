#pragma once
#include "Direction.h"
#include "arduino.h"

#define DEFAULTSPEED 200 //default speed, can be changed if needed.
class Motor
{
private:
    int in1, in2, PWM, offset;
    /*
    in1 and in2 are inputs on the pins.
    pwm is the power. It should probably be pwma / pwmb
    offset is to change directions in software
    */
    //spins motor forward and backwards.
    void fwd(int speed);
	void rev(int speed);
public:
    Motor();
      ~Motor();
    Motor(int In1pin, int In2pin, int PWMpin, int offset);
    void Drive(int speed);
    void Drive(int speed, int duration);
    void Brake();
    void Standby();

    void Forward(Motor motor1, Motor motor2);
    void Backward(Motor motor1, Motor motor2, int speed);
    void Left(Motor left, Motor right, int speed);
    void Right(Motor left, Motor right, int speed);
    
    void Drive(Direction direction);
    int GetIn1();
    int GetIn2();
    int GetPWM();
    int GetOffset();
};


