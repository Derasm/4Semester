#include "CtrTask.h"
#include "dbTask.h"
#include "Point.h"



Task CtrTask::FindTask(int ID)
{
	Task task;
	dbTask db;
	task = db.FindTask(ID);
	return Task();
}

int CtrTask::CreateTask(Point from, Point to, int priority)
{
	//TODO
	return 0;
}

bool CtrTask::CompleteTask()
{
	//TODO
	return false;
}

CtrTask::CtrTask()
{
}


CtrTask::~CtrTask()
{
}
