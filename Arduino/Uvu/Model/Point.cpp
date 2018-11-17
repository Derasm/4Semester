#include "Point.h"
int Point::GetX(){
    return x;
}
int Point::GetY(){
    return y;
}
void Point::SetY(int in){
    y=in;
}
void Point::SetX(int in){
    x=in;
}
Point::Point(int X, int Y){
    x = X;
    y = Y;
}