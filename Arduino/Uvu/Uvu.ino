#include "arduino.h"
#include "CtrMotor.h" // controller of the motors
#include "CtrDistance.h" // accelerometer.

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
CtrMotor ctrMotor = CtrMotor();

void setup(){
    //setup things before the program can run.
    
}
/*
    will run in a positive feedback loop where a task is sent to the bot, the bot figures a route and moves to the area.
    */
void loop(){
    Motor leftMotor = ctrMotor.CreateMotor(8,10,9,0);
    Motor rightMotor = ctrMotor.CreateMotor(12,13,3,0);
    CtrMotor ctrMotor = CtrMotor();
    
   int gridDistance = 10;
   CtrDistance distance = CtrDistance();
   
   for(int i = 0; i < ListOfActions.size(); i++)
   {
       while(distance.GetDistanceDriven() <= gridDistance){
       //cases for the different actions, until a better solution is found. 
    }
   }

//end of method
}

