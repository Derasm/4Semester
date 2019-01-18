#include "CtrPlanning.h"

CtrPlanning::CtrPlanning() {
  startPoint = Point(1, 1);
  endPoint = Point(0, 0);
}
CtrPlanning::CtrPlanning(Point startPoint, Point endPoint) {
  startPoint = Point(startPoint.GetX(), startPoint.GetY());
  endPoint = Point(endPoint.GetX(), endPoint.GetY());
}

void CtrPlanning::SetEndPoint(Point point) {
  endPoint = Point(point.GetX(), point.GetY());
}
void CtrPlanning::SetStartPoint(Point point) {
  startPoint = Point(point.GetX(), point.GetY());
}
Point CtrPlanning::GetEndPoint(Point point) {
  return endPoint;
}
Point CtrPlanning::GetStartPoint(Point point) {
  return startPoint;
}
void CtrPlanning::UpdateBotPosition(Point point) {
  Point(point.GetX(), point.GetY());
}
Point CtrPlanning::GetBotPosition(Point point) {
  return botPosition;
}
Point CtrPlanning::CreatePoint(int x, int y) {
  return Point(x, y);
}
/*
//simple planning, doesn't check heurestics, only compared x / y values of start and enpoint.
String CtrPlanning::SimplePlanner(Point startPoint, Point endPoint) {
  Point currentPosition = Point(startPoint.GetX(), startPoint.GetY());
  String directions = "";
  char direction;
  int index = 0;

  while (currentPosition.GetX() != endPoint.GetX() && currentPosition.GetY() != endPoint.GetY()) {
    //check if startY vs endY, if greater, move up by Y minus 1, else move down by Y plus 1.
    //Check if startX vs endX, if greater move left by X minus 1, else move right by X plus 1.
    if (startPoint.GetY() > endPoint.GetY()) {
      //move up by Y minus 1
      currentPosition.SetY(currentPosition.GetY() - 1);
      direction = 'u'; // move bot up 1.
      directions.setCharAt(index, direction);
      index++;
    }
    else if (startPoint.GetX() > endPoint.GetX()) {
      //move right by x plus 1
      currentPosition.SetX(currentPosition.GetX() + 1);
      direction = 'r'; //move bot right 1.
      directions.setCharAt(index, direction);
      index++;
    }
    else if (startPoint.GetY() > endPoint.GetY()) {
      //move down by Y plus 1
      currentPosition.SetY(currentPosition.GetY() + 1);
      direction = 'd'; //move bot down 1.
      directions.setCharAt(index, direction);
      index++;
    }
    else
    {
      //move left by X minus 1.
      currentPosition.SetX(currentPosition.GetX() - 1);
      direction = 'l'; // move left by 1
      directions.setCharAt(index, direction);
      index++;
    }
  } //while loop
  //returns nothing as it is void and passed by Reference.
  return directions;
}//method end.
*/
