//handles the database aspect of the Task portion of the program.
/*
Pros and Cons of API vs direct uplink:
Pros: Easier to scale, wont have to change things multiple places.
Cons: Will take longer to setup. Will be a second thing to set up.
will be a seperate program that has to run. Though will also mean singular entrance to db.
Likely will be possible to have the program running on the pi itself, though likely wont be that smart.

*/
#include "dbTask.h"

dbTask::dbTask()
{
}

dbTask::~dbTask()
{
}
Task dbTask::GetTask() {
	//will return current task.
}
