#include "User.h"
#include "date.h" // special library from github.
#include <chrono>
class Task
{
  private:
    auto currentDate;
    auto currentTime;
    Point from;
    Point to;
    int priority;

  public:
    Task(Point from, Point to);
    ~Task();
};

Task::Task(Point from, Point to, int priority)
{
    from -> from;
    to -> to;
    priority -> priority;
    currentDate = floor<days>(system_clock::now()); // current date.
    currentTime = system_clock::now(); // should get current time.
}

Task::~Task()
{
}
auto GetCurrentDate(){
  return currentDate;
}

auto GetCurrentTime(){
  return currentTime;
}

Point GetFrom(){
  return from;
}

Point GetTo(){
  return to;
}

