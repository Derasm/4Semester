
#include "CtrMotor.h" // controller of the motors
#include "CtrPlanning.h" 



//pin setup saved for eastartY findings.
// #define PWMA 3
// #define A1n2 13
// #define A1N1 12

// #define B1N1 10
// #define B1N2 8
// #define PWMB 9
//Pins for the shield.

//defined outside of Setup so i can use it in Loop. #globalVariablesDidNothingWrong

CtrPlanning ctrPlanning = CtrPlanning();
CtrMotor ctrMotor = CtrMotor();



void setup() {
  //no setup required as state of pins are set in the files that use them.
}
/*
    will run in a positive feedback loop where a task is sent to the bot, the bot figures a route and moves to the area.
*/
void loop() {
  //String route = DrivingRoute();
  String route = "urudul";
  ctrMotor.DriveByDirections(route);
  //sends the motor controller the list of directions

}//end of method


void DrivingRoute() {

  //this part is unnecessary and simply to show a random setup of points and driving route.
  int arrayForNr[4];
  int maxSize = 5; //is not n-inclusive
  for (int i = 0; i < 4; i++)
  {
    arrayForNr[i] = random(maxSize, 0);
  }
  int startX = arrayForNr[0];
  int startY = arrayForNr[1];
  int endX = arrayForNr[2];
  int endY = arrayForNr[3];
  //the actual routegetting part.
  Point startPoint = ctrPlanning.CreatePoint(startX, startY); //creates point with coordinates.
  Point endPoint = ctrPlanning.CreatePoint(endX, endY);
  ctrPlanning.SimplePlanner(startPoint, endPoint);
  //return route;
}
