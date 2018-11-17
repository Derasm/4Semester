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
void CtrMotor::Drive(int speed, double duration, Motor motor){
    speed = speed * offset;
    if(speed > 0)fwd(speed);
    else rev (-speed);
    //currently not doing anything.
    delay(duration*1000);
}
void CtrMotor::Drive(int speed, Motor motor){
    speed = speed * offset;
    if(speed > 0)fwd(speed);
    else rev (-speed);
}
void CtrMotor::Brake(Motor motor){
    digitalWrite(in1, HIGH); //takes pin and current
    digitalWrite(in2, HIGH); //both pins set to high to facilitate stop.
    analogWrite (PWM,0); // takes pin and speed
}
void CtrMotor::Forward(Motor motor1, Motor motor2){
    Drive(DEFAULTSPEED, motor1);
    Drive(DEFAULTSPEED, motor2);
}
void CtrMotor::Forward(Motor motor1, Motor motor2, int speed){
    Drive(speed, motor1);
    Drive(speed, motor2);
    
}
void CtrMotor::Backward(Motor motor1, Motor motor2, int speed){
    int temp = abs(speed);//returns absolute value of speed.
    //absolute value is denoted as the value from the value 0, regardless of notation.
    motor1.Drive(-temp);
    motor2.Drive(-temp);
}
void CtrMotor::Left(Motor left, Motor right, int speed){
    //todo
    int temp = abs(speed)/2; //divided for lower speed
    right.Drive(temp);
    left.Drive(-temp);

}
void CtrMotor::Right(Motor left, Motor right, int speed){
    int temp = abs(speed)/2; //divided for lower speed
    right.Drive(-temp);
    left.Drive(temp);
}
void CtrMotor::Drive(Direction direction, Motor left, Motor right){
   
   
}