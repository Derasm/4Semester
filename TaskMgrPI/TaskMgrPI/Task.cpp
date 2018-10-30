#include "Task.h"
Task::Task()
{
}

Point Task::GetFrom()
{
	return from;
}

Point Task::GetTo()
{
	return to;
}

int Task::GetPriority()
{
	return priority;
}

bool Task::GetIsComplete()
{
	return isComplete;
}

int Task::GetID()
{
	return ID;
}

Task::Task(Point pFrom, Point pTo, int tPriority, int tID)
{
	from = pFrom;
	to = pTo;
	priority = tPriority;
	ID = tID;
	currentDate = floor<days>(std::chrono::system_clock::now()); // sets the currentdate to object creation date.
}

Task::~Task()
{
}
