#include "CtrPlanning.h"
#include "Point.h"
#include <vector>
#include <string>

using namespace std;

CtrPlanning::CtrPlanning(){
    startPoint = Point(1,1);
    endPoint = Point(0,0);
}
CtrPlanning::CtrPlanning(Point startPoint, Point endPoint){    
    startPoint = Point(startPoint.GetX(), startPoint.GetY());
    endPoint = Point(endPoint.GetX(), endPoint.GetY());
}

void CtrPlanning::SetEndPoint(Point point){
    endPoint = Point(point.GetX(), point.GetY());
}
void CtrPlanning::SetStartPoint(Point point){
    startPoint = Point(point.GetX(), point.GetY());
}
Point CtrPlanning::GetEndPoint(Point point){
    return endPoint;
}
Point CtrPlanning::GetStartPoint(Point point){
    return startPoint;
}
void CtrPlanning::UpdateBotPosition(Point point){
    Point(point.GetX(), point.GetY());
}
Point CtrPlanning::GetBotPosition(Point point){
    return botPosition;
}
Point CtrPlanning::CreatePoint(int x, int y){
    return Point(x,y);
}
//simple planning, doesn't check heurestics, only compared x / y values of start and enpoint. 
vector<string> CtrPlanning::SimplePlanner(Point startPoint, Point endPoint){
    Point currentPosition = Point(startPoint.GetX(), startPoint.GetY());
    vector<string> directions;
    string direction = "";
   
    while(currentPosition.GetX() != endPoint.GetX() && currentPosition.GetY() != endPoint.GetY()){
    //check if startY vs endY, if greater, move up by Y minus 1, else move down by Y plus 1.
    //Check if startX vs endX, if greater move left by X minus 1, else move right by X plus 1.
        if (startPoint.GetY()> endPoint.GetY()) {
            //move up by Y minus 1
            currentPosition.SetY(currentPosition.GetY()-1);
            direction = "UP"; // move bot up 1. 
            directions.push_back(direction);
        }
        else if(startPoint.GetX()> endPoint.GetX()) {
            //move right by x plus 1
            currentPosition.SetX(currentPosition.GetX()+1);
            direction = "RIGHT"; //move bot right 1.
            directions.push_back(direction);
        }
        else if(startPoint.GetY()> endPoint.GetY()) {
            //move down by Y plus 1
            currentPosition.SetY(currentPosition.GetY()+1);
            direction = "DOWN"; //move bot down 1.
            directions.push_back(direction);
        }
        else
        {
            //move left by X minus 1.
            currentPosition.SetX(currentPosition.GetX()-1);
            direction = "LEFT"; // move left by 1 
            directions.push_back(direction);
        }
    } //while loop
    return directions;
}//method end.

