// class_week#9_problem#1.cpp

#include <iostream>
using namespace std;

class Person
{
    private:
        string name;
        string job;
        int age;
    public:
        Person()
        {
            name = "Cheolsoo";
            job = "unemployed";
            age = 20;
        }
        Person(const string & myname, const string & myjob, 
            int myage) : name(myname), job(myjob), age(myage) {}
    void display() const
    {
        cout << name << " is " << job << endl;
        cout << name << " is " << age << " years old" << endl; 
        cout << name;
    }

};

class Teacher : public Person
{
    private:
        string subject;
    public:
        Teacher() : subject("Anything") {}
        Teacher(const string & myname, const string & job,
            int age, const string & mysubject) : Person(myname, job, age)
        {
            subject = mysubject;
        }
    void display() const
    {
        Person::display();
        cout << " can teach " << subject << endl;
    }
};

class Player : public Person
{
    private:
        string team;
    public:
        Player(const string & myname, const string & job,
            int age, const string & myteam) : Person(myname, job, age)
        {
            team = myteam;
        }
    void display() const
    {
        Person::display();
        cout << "'s team is " << team << endl;
    }

};

int main(void)
{
    cout << "--------------------" << endl;
    Teacher t;
    t.display();
    cout << "--------------------" << endl;
    Teacher park("Park", "Professor", 37, "C++");
    park.display();
    cout << "--------------------" << endl;
    Player son("Son", "soccor player", 28, "Tollenham Hotspir");
    son.display();
    cout << "--------------------" << endl;
    Player ryu("Ryu", "baseball player", 33, "LA Dodgers");
    ryu.display();
    cout << "--------------------" << endl;

    return 0;
}
