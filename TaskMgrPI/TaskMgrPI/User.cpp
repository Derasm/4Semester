#include "User.h"
#include <string>
using namespace std;

User::User(string inName){
  name = inName;
}
string User::GetUserName(){
  return name;
}
