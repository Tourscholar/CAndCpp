// class_week5_problem#1.cpp

#include <iostream>
#include <string>
using namespace std;

class User 
{
    public:
        User(string a, string b) : name(a), id(b), read_count() {}
        string get_name() const {return name;}
        string get_id() const {return id;}
        int get_read_access() const {return (2 + read_count);}
    private:
        string name;
        string id;
        int read_count;
};

int main(void)
{
    User user1("Park", "105245");
    for (int i = 0; i < 10; i++)
    {
        cout << user1.get_name() << ", " << user1.get_id()
             << ":Read count = " << i * user1.get_read_access() << endl;
    }

    return 0;
}
