#pragma once
#include <vector>
#include "Task.h"
#include "Point.h"
class CtrTask
{
private:

public:
	std::vector<Task> GetTasks();
	void CompleteTask(Task task);
	Task NewTask(Point from, Point to, int priority);

	CtrTask();
	~CtrTask();
};

