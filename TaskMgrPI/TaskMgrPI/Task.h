#pragma once
#include "date.h"
#include "Point.h"
using namespace date;
class Task
{
private:
	year_month_day  currentDate;
	Point from;
	Point to;
	int priority;
	bool isComplete;
	int ID;
public:
	Task();
	Point GetFrom();
	Point GetTo();
	int GetPriority();
	bool GetIsComplete();
	int GetID();
	Task(Point pFrom, Point pTo, int tPriority, int tID);
	~Task();
};

