#include "User.h"
#include "date.h" // special library from github.
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
    from -> from;
    to -> to;
    currentDate = floor<days>(system_clock::now()); // current date.
    currentTime = 
}

Task::~Task()
{
}
