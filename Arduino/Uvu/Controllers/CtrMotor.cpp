#include "CtrMotor.h"
#include "Motor.h"
#include "arduino.h"
#include <string>
#include <vector>
#pragma once

//Pins
#define PWMA 3
#define A1n2 13
#define A1N1 12

#define B1N1 10
#define B1N2 8
#define PWMB 9
using namespace std;

Motor CtrMotor::CreateMotor(int In1pin, int In2pin, int PWMpin, int offset){
    Motor motor = Motor(In1pin, In2pin, PWMpin, offset);
    return motor;
}

void CtrMotor::Brake(Motor motor){
    motor.Brake();
}
void CtrMotor::Forward(Motor left, Motor right){
    left.Drive(DEFAULTSPEED);
    right.Drive(DEFAULTSPEED);
}
void CtrMotor::Backward(Motor left, Motor right){
    int temp = abs(DEFAULTSPEED);//returns absolute value of speed.
    //absolute value is denoted as the value from the value 0, regardless of notation.
    left.Drive(-temp);
    right.Drive(-temp);
}
void CtrMotor::Left(Motor left, Motor right){
    //todo
    int temp = abs(DEFAULTSPEED)/2; //divided for lower speed
    right.Drive(temp);
    left.Drive(-temp);// not entirely sure this is right.

}
void CtrMotor::Right(Motor left, Motor right){
    int temp = abs(DEFAULTSPEED)/2; //divided for lower speed
    right.Drive(-temp);
    left.Drive(temp); // not entirely sure this is right.
}
void CtrMotor::Stop(Motor left, Motor right)
{
  left.Brake();
  right.Brake();
}
void CtrMotor::DriveByDirections(std::vector<std::string> directions, Motor left, Motor right){
   
   for(string str : directions)
  {
    //can't use switch as it can only take constants, not usertypes. 
    if (str == "UP") {
        Forward(left, right);
    }
    else if(str == "RIGHT") {
        Right(left, right);
    }
    else if( str == "DOWN")
    {
        Backward(left, right);
    }
    else {
        Left(left, right);
    }
    delay(1000); // delays for a second...duh.
  }
}