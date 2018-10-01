#include "User.h"
#include <string>
using namespace std;
class User
{
private:
    string name;
    int id; // will be used when DB class is setup. Will be set by constructor if user is found in db.
public:
    User(string name);
    ~User();
};

User::User(string name)
{
    name -> name;
}

User::~User()
{
}
