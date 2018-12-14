#pragma once
#include "arduino.h"
#include <string>
#include <vector>

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
        Motor(int In1pin, int In2pin, int PWMpin, int offset);

    ~Motor();
    void Drive(int speed);
    void Brake();
    void Standby(); // hmm.

    int GetIn1();
    int GetIn2();
    int GetPWM();
    int GetOffset();
};


