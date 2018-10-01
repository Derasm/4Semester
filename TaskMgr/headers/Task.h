#ifndef(Task.h)
#define Task.h
#include "Point.h"
#include "User.h"
#include "date.h"
class Task
{
  private:
    auto currentDate;
    auto currentTime;
    Point from;
    point to;

  public:
    Task(Point from, Point to);
    ~Task();
};

Task::Task(Point from, Point to)
{
}

Task::~Task()
{
}
#endif // MACRO
