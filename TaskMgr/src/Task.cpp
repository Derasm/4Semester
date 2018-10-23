#include "../headers/User.h"
#include "../headers/date.h" // special library from github.
#include "../headers/Point.h"
#include "../headers/Task.h"
#include <chrono>
using namespace std::chrono;
using namespace date; //doesn't conflict with chrono

Task::Task(Point from, Point to, int priority)
{
    fromPoint = from;
    toPoint = to;
    taskPriority = priority;
    currentDate = floor<date::days>(system_clock::now()); // current date.
}

Task::~Task()
{
}
date::year_month_day Task::GetCurrentDate(){
  return currentDate;
}

Point Task::GetFrom(){
  return fromPoint;
}

Point Task::GetTo(){
  return toPoint;
}
