#include <iostream>
#include <optional>
#include <string>

using namespace std;
class User
{
    std::string username;
    std::optional<std::string> nickname;
    std::optional<int> age; 
    public:
    User(std::string username, std::optional<std::string> nickname,std::optional<int> age )
    :username(username),nickname(nickname),age(age)
    {}

    friend ostream& operator <<(ostream& os,const User& user);
};

ostream& operator<<(ostream& os,const User& user){
    os<<user.username<<',';
    if (user.nickname)
    {
        os<<*user.nickname<<',';
    }

    if (user.age)
    {
       os<< *user.age<<'\n';
    }
    return os;
    
}


int main(int argc, char const *argv[])
{
    User user1("hello","world",10);
    User user2("hhhh",nullopt,nullopt);
    cout<<user1<<'\n';
    cout<<user2<<'\n';
    return 0;
}
