
#include "Motor.h"
#include "arduino.h"
/*
setup for the pins. Saved here for easy findings. 
#define PWMA 3
#define A1n2 13
#define A1N1 12

#define B1N1 10
#define B1N2 8
#define PWMB 9
// #define
// #define
// #define
// #define
*/
Motor::Motor(){}; //empty constructor because reasons
Motor::Motor(int In1pin, int In2pin, int PWMpin, int offset)
{
  in1 = In1pin;
  in2 = In2pin;
  PWM = PWMpin;

  offset = offset;

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(PWM, OUTPUT);
}
//private functions
void Motor::fwd(int speed)
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(PWM, speed);
}
void Motor::rev(int speed)
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(PWM, speed);
}

//public functions
void Motor::Drive(int speed)
{
  speed = speed * offset;
  if (speed >= 0)
    fwd(speed);
  else
  {
    rev(-speed);
  }
}

void Motor::Drive(int speed, int duration)
{

  speed = speed * offset;
  if (speed >= 0)
    fwd(speed);
  else
    rev(-speed);
  //duration aint doing anything.
  delay(duration);
}
void Motor::Brake()
{
  digitalWrite(in1, HIGH); //takes pin and current
  digitalWrite(in2, HIGH); //both pins set to high to facilitate stop.
  analogWrite(PWM, 0);     // takes pin and speed
}
void Motor::Standby()
{
  // digitalWrite(standby, LOW); //as HIGH is necessary to drive.
}

void Motor::Forward(Motor motor1, Motor motor2)
{
  //takes two motors, calls forward or drive on both.
  motor1.Drive(DEFAULTSPEED);
  motor2.Drive(DEFAULTSPEED);
}
void Motor::Backward(Motor motor1, Motor motor2, int speed)
{
  int temp = abs(speed); //IF statement checks value of temp.
  motor1.Drive(-temp);
  motor2.Drive(-temp);
}
void Motor::Left(Motor left, Motor right, int speed)
{
  int temp = abs(speed) / 2;
  left.Drive(-temp);
  right.Drive(temp);
}
void Motor::Right(Motor left, Motor right, int speed)
{
  int temp = abs(speed) / 2;
  left.Drive(temp);
  right.Drive(-temp);
}
void Brake(Motor motor1, Motor motor2)
{
  motor1.Brake();
  motor2.Brake();
}
//Will be implemented later, when app is created for phone
void Motor::Drive(Direction direction)
{
  //TODO
}
