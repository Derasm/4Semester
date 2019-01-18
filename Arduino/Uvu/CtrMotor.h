#include "Motor.h"

#define DEFAULTSPEED 200 //default speed, can be changed if needed.

/*
    CtrMotor calls functions on the Motor itself to seperate the responsibility
    no method takes speed as a parameter, as it is unnecessary.
  #define PWMA 3
  #define A1N2 13
  #define A1N1 12
  #define B1N1 10
  #define B1N2 8
  #define PWMB 9
  //ofset is used to switch directions if needed from software instead of hardware.
  #define OFFSET 1
*/

class CtrMotor
{
  private:
    int in1, in2, PWM;
    int offset = 1;
    void fwd(int speed);
    void rev(int speed);
    Motor left;
    Motor right;
  public:
    CtrMotor();
    ~CtrMotor();
    void Brake(Motor motor);
    void Forward();
    void Backward();
    void Left();
    void Right();
    void Stop();
    void DriveByDirections(String directions);
};
