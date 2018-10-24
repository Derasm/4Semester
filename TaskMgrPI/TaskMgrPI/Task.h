#pragma once

#include "Point.h"
#include "User.h"
#include "date.h"

class Task
{
  /*
  is supposed to create a task, with a point from, a point to
  and a priority. Sender is not important at this point.
  Time can likely be ignored by using ID for nr, and Bool for completed
  */
  private:
    int id;
	year_month_day taskDate;
    bool isCompleted;
    Point fromPoint;
    int taskPriority;
    Point toPoint;
  public:
    Task();
    ~Task();
    Task(Point from, Point to, int priority, int tID);
    Point GetFrom();
    Point GetTo();
    int GetID();
    bool GetCompletionStatus();
    date::year_month_day GetTaskDate();
};
