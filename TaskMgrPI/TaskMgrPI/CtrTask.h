#pragma once
#include "Task.h"
#include <string>
#include <vector>
class CtrTask
{
	/*
	Handles the creation of Tasks from the UI. Connects to DB abstraction layer to insert objects in DB.
	
	*/
public:
	Task FindTask(int ID);
	int CreateTask(Point from, Point to, int priority);
	bool CompleteTask();

	CtrTask();
	~CtrTask();
};

