#include "CtrGrid.h"
#include <utility>

CtrGrid::CtrGrid(){
    // height = 10;
    // width = 10;
    startPoint = std::make_pair(1,1);
    endPoint = std::make_pair(0,0);
}
CtrGrid::CtrGrid(int x, int y){
// height = 10;
    // width = 10;
    startPoint = std::make_pair(1,1);
    endPoint = std::make_pair(y,x);
}

void CtrGrid::SetEndPoint(int x, int y){
    endPoint = std::make_pair(x,y);
}
void CtrGrid::SetStartPoint(int x, int y){
    startPoint = std::make_pair(x,y);
}
pair<int,int> CtrGrid::GetEndPoint(int x, int y){
    return endPoint;
}
pair<int,int> CtrGrid::GetStartPoint(int x, int y){
    return startPoint;
}
pair<int,int> CtrGrid::GetBotPosition(int x, int y){
    return botPosition;
}
void CtrGrid::UpdateBotPosition(int x, int y){
    botPosition = make_pair(x,y);
}
