#include "arduino.h"
#include "CtrMotor.h" // controller of the motors
#include "CtrDistance.h" // accelerometer.
#include "CtrGrid.h"
#include "CtrPlanning.h"

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
CtrDistance ctrDistance;
CtrGrid ctrGrid;
CtrPlanning ctrPlanning;
CtrMotor ctrMotor;


void setup(){
    ctrDistance = CtrDistance();
    ctrGrid = CtrGrid();
    ctrPlanning = CtrPlanning();

    ctrMotor = CtrMotor();
    
}
/*
    will run in a positive feedback loop where a task is sent to the bot, the bot figures a route and moves to the area.
    */
void loop(){    
    Motor leftMotor = ctrMotor.CreateMotor(8,10,9,0); //made global as they will be used throughout, so no need to constantly create and remove.
    Motor rightMotor = ctrMotor.CreateMotor(12,13,3,0);
}//end of method

