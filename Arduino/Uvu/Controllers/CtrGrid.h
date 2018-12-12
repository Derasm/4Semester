#pragma once
#define WIDTH 4
#define HEIGHT 4
#include <utility>
using namespace std;
/*
har ansvar for gridmappet og opdatering af bottens placering. 
Dette gøres med to lister, en not-visited list of nodes, og en visited list of nodes.
*/
class CtrGrid
{
    //height and width commented out as unnecessary until a better solution is find.
private:
    //int height, width;
    pair <int, int> startPoint;
    pair <int,int> botPosition;
    pair <int, int> endPoint;
    //x and y are reversed, as HEIGHT is coloumn and WIDTH is row.
    int grid[HEIGHT][WIDTH] = {
        {0,0,0,0}, 
        {0,0,0,0}, 
        {0,0,0,0}, 
        {0,0,0,0}, 
    }; //hardcoded with defined values for now
public:
    void SetEndPoint(int x, int y);
    void SetStartPoint(int x, int y);
    pair<int,int> GetEndPoint(int x, int y);
    pair<int,int> GetStartPoint(int x, int y);
    pair<int,int> GetBotPosition(int x, int y);
    void UpdateBotPosition(int x, int y);
    
    CtrGrid(/* args */);
    CtrGrid(int x, int y);
    ~CtrGrid();
};