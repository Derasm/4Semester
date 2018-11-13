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
    CtrMotor();
    Motor CreateMotor(int In1pin, int In2pin, int PWMpin, int offset);
    ~CtrMotor();

    void Drive(int speed, Motor motor);
    void Drive(int speed, int duration, Motor motor);
    void Brake(Motor);
    void Standby(Motor motor);
    void Forward(Motor motor1, Motor motor2);
    void Backward(Motor motor1, Motor motor2, int speed);
    void Left(Motor left, Motor right, int speed);
    void Right(Motor left, Motor right, int speed);
    void Drive(Direction direction);
};

