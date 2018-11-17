#include "arduino.h"
#include "CtrMotor.h" // controller of the motors

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
void loop(){
    /*
    will run in a positive feedback loop where a task is sent to the bot, the bot figures a route and moves to the area.

    */
}
