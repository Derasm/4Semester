#pragma once
#include "Motor.h"
#include "arduino.h"
#include <string>
#include <vector>

#define DEFAULTSPEED 200 //default speed, can be changed if needed.

/*
    CtrMotor calls functions on the Motor itself to seperate the responsibility
    no method takes speed as a parameter, as it is unnecessary.

*/

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
    void Brake(Motor motor);
    void Forward(Motor left, Motor right);
    void Backward(Motor left, Motor right);
    void Left(Motor left, Motor right);
    void Right(Motor left, Motor right);
    void Stop(Motor left, Motor right);
    void DriveByDirections(std::vector<std::string> directions, Motor left, Motor right);
};

