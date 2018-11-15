#include "CtrMotor.h"
#include "Motor.h"
#include "arduino.h"
#pragma once



//Pins
#define PWMA 3
#define A1n2 13
#define A1N1 12

#define B1N1 10
#define B1N2 8
#define PWMB 9

Motor CtrMotor::CreateMotor(int In1pin, int In2pin, int PWMpin, int offset){
    Motor motor = Motor(In1pin, In2pin, PWMpin, offset);
    return motor;
}

void CtrMotor::Drive(int speed, Motor motor){
    
}
void CtrMotor::Drive(int speed, int duration, Motor motor){
    //TODO
}
void CtrMotor::Brake(Motor){
    //todo

}
void CtrMotor::Standby(Motor motor){
    //todo

}
void CtrMotor::Forward(Motor motor1, Motor motor2){
    //todo

}
void CtrMotor::Backward(Motor motor1, Motor motor2, int speed){
    //todo
}
void CtrMotor::Left(Motor left, Motor right, int speed){
    //todo

}
void CtrMotor::Right(Motor left, Motor right, int speed){
    //todo
}
void CtrMotor::Drive(Direction direction){
    //todo
}