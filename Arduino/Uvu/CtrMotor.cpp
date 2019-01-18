#include "CtrMotor.h"




//Pins
#define PWMA 3
#define A1N2 13
#define A1N1 12

#define B1N1 10
#define B1N2 8
#define PWMB 9
using namespace std;


CtrMotor::CtrMotor() {
  left = Motor(A1N1, A1N2, PWMA, offset);
  right = Motor(B1N1, B1N2, PWMB, offset);
}

void CtrMotor::Brake(Motor motor) {
  motor.Brake();
}
void CtrMotor::Forward() {
  left.Drive(DEFAULTSPEED);
  right.Drive(DEFAULTSPEED);
}
void CtrMotor::Backward() {
  int temp = abs(DEFAULTSPEED);//returns absolute value of speed.
  //absolute value is denoted as the value from the value 0, regardless of notation.
  left.Drive(-temp);
  right.Drive(-temp);
}
void CtrMotor::Left() {
  //todo
  int temp = abs(DEFAULTSPEED) / 2; //divided for lower speed
  right.Drive(temp);
  left.Drive(-temp);// not entirely sure this is right.

}
void CtrMotor::Right() {
  int temp = abs(DEFAULTSPEED) / 2; //divided for lower speed
  right.Drive(-temp);
  left.Drive(temp); // not entirely sure this is right.
}
void CtrMotor::Stop()
{
  left.Brake();
  right.Brake();
}
//cannot take vector or strings, as these
void CtrMotor::DriveByDirections(String directions) {
  //char directions[7] = "urudul";
    for (int i = 0; i < directions.length(); i++)
  {
    //can't use switch as it can only take constants, not usertypes.
    if (directions.charAt(i) == 'u') {
      Forward();
    }
    else if (directions.charAt(i) == 'r') {
      Right();
    }
    else if (directions.charAt(i) == 'd')
    {
      Backward();
    }
    else {
      Left();
    }
    delay(1000); // delays for a second...duh.
  }
}
