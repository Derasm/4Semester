#include "User.h"
#include "date.h" // special library from github, used instead of fiddling with C libaries.
#include "Point.h"
#include "Task.h"
#include <chrono>
#include "Task.h"
using namespace std::chrono;
using namespace date; //doesn't conflict with chrono

Task::Task(Point from, Point to, int priority, int tID)
{
    fromPoint = from;
    toPoint = to;
    taskPriority = priority;
	id = tID;
}

Task::Task()
{
}

Task::~Task()
{
}

Point Task::GetFrom(){
  return fromPoint;
}

Point Task::GetTo(){
  return toPoint;
}

int Task::GetID()
{
	return id;
}

bool Task::GetCompletionStatus()
{
	return isCompleted;
}
