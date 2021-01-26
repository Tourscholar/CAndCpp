// first_work -- test!

#include <iostream>

struct people
{
    char first_name[20];
    char last_name[20];
    char grade;
    int age;
};

int main(void)
{
    using namespace std;
    people * name = new people;

    cout << "What is your first name?";
    cin.getline(name->first_name, 20);
    cout << "What is your last name?";
    cin.getline(name->last_name, 20);
    cout << "What letter grade do you deserve?";
    cin >> name->grade;
    cout << "What is your age?";
    cin >> name->age;
    cout << "Name: " << name->last_name << ", " << name->first_name << endl;
    cout << "Grade: ";
    cout.put(name->grade + 1) << endl;
    cout << "Age: " << name->age << endl;

    delete name;

    return 0;
}