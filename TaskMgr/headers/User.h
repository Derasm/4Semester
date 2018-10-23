#pragma once
#include <string>
class User
{
private:
    std::string name;
    int id;
public:
    User(std::string name);
    ~User();
    std::string GetUserName();
};
