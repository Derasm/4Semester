#pragma once
#define WIDTH 4
#define HEIGHT 4
#include <vector>
#include <string>
#include "Point.h"
/*
Will handle the planning of the route from the current location to the endlocation, will return an array of directions? maybe?
Uses A* for easiest route to the endlocation.

har ansvar for gridmappet og opdatering af bottens placering. 
Dette gøres med to lister, en not-visited list of nodes, og en visited list of nodes.
*/

class CtrPlanning
{
private:
    //int height, width;
    Point startPoint;
    Point botPosition;
    Point endPoint;
    //x and y are reversed, as HEIGHT is coloumn and WIDTH is row.
    int grid[HEIGHT][WIDTH] = {
        {0,0,0,0}, 
        {0,0,0,0}, 
        {0,0,0,0}, 
        {0,0,0,0}, 
    }; //hardcoded with defined values for now

public:
    CtrPlanning(/* args */); // defaultvalues of 1,1 for start and 0,0 for end.
    CtrPlanning(Point startPoint, Point endPoint); 
    ~CtrPlanning();
    void SetEndPoint(Point point);
    void SetStartPoint(Point point);
    Point GetEndPoint(Point point);
    Point GetStartPoint(Point point);
    Point GetBotPosition(Point point);
    void UpdateBotPosition(Point point);
    Point CreatePoint(int x, int y);
    //currently ignores the grid and the size. Grid will be used when A* is implemented. For now, compared X and Y values. 
    std::vector<std::string> SimplePlanner(Point startPoint, Point endPoint);
};
