#pragma once
#include "Task.h"
#include <list>
class dbTask
{
public:
	Task FindTask(int ID);
	Task InsertTask(Task task);
	Task CompleteTask(Task task);
	std::list<Task> FindAllTasks();
	dbTask();
	~dbTask();
};

