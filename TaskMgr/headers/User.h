#ifndef(User.h)
#define User.h
/*
* checks if the file is already included in the file calling it with #include. If it is, it gets ignored. Else it gets included.
*/
class User
{
private:
    std::string name;
    int id;
public:
    User(string name);
    ~User();
};

User::User(string name)
{
}

User::~User()
{
}
#endif

