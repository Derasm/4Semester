#include "arduino.h"
#include "CtrMotor.h" // controller of the motors
#include "CtrDistance.h" // accelerometer.
#include "CtrPlanning.h"
#include <string>
#include <vector>
#include <stdlib.h> //rand, srand
#include <time.h> 
#include <stdio.h> //null.
//pin setup saved for eastartY findings.
// #define PWMA 3
// #define A1n2 13
// #define A1N1 12

// #define B1N1 10
// #define B1N2 8
// #define PWMB 9
//Pins for the shield. 
#define PWMA 3 
#define A1N2 13
#define A1N1 12
#define B1N1 10
#define B1N2 8
#define PWMB 9
//ofset is used to switch directions if needed from software instead of hardware.
#define OFFSET 1
//defined outside of Setup so i can use it in Loop in Visual Code.
CtrDistance ctrDistance = CtrDistance();
CtrPlanning ctrPlanning = CtrPlanning();
CtrMotor ctrMotor = CtrMotor();


void setup(){
   //no setup required as state of pins are set in the files that use them.    
}
/*
    will run in a positive feedback loop where a task is sent to the bot, the bot figures a route and moves to the area.
    */
void loop(){    
    Motor leftMotor = ctrMotor.CreateMotor(8,10,9,0); //made global 
    Motor rightMotor = ctrMotor.CreateMotor(12,13,3,0);
    //sends the motor controller the list of directions 

}//end of method
std::vector<std::string> DrivingRoute(){
    
    //this part is unnecessary and simply to show a random setup of points and driving route. 
    int arrarForNr[4];
    for(int i = 0; i < 4; i++)
    {
        srand(time(NULL));
        arrarForNr[i] = std::rand();
    }
    int startX = arrarForNr[0];
    int startY = arrarForNr[1];
    int endX = arrarForNr[2];
    int endY = arrarForNr[3];
    //the actual routegetting part. 
    Point startPoint = ctrPlanning.CreatePoint(startX,startY); //creates point with coordinates.
    Point endPoint = ctrPlanning.CreatePoint(endX,endY);
    std::vector<std::string> directions = ctrPlanning.SimplePlanner(startPoint, endPoint);
    return directions;
}
