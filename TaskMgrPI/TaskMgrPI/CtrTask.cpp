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
	Task task;
	task.SetFrom(from);
	task.SetTo(to);
	task.SetPriority(priority);
	return task.GetID();
}

bool CtrTask::CompleteTask()
{
	//TODO
	return false;
}

void CtrTask::
DeleteTask()
{
}

void CtrTask::Smth()
{
	dosomething();
}

Task CtrTask::Dotask()
{
	return Task();
}

Task CtrTask::AssembleTask()
{
	return Task();
}

CtrTask::CtrTask()
{
}


CtrTask::~CtrTask()
{
}
