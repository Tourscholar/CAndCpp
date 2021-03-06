// class_week6_problem#1.cpp

#include <iostream>
#include <string>
using namespace std;

class Girl;
class Boy
{
    public:
        Boy(int h) : height(h) {}
        void showYourGirlFriend(Girl& girl);
    private:  
        int height;
};

class Girl
{
    public:
        Girl(string p, string n)
        {
            phone = p;
            name = n;
        }
        friend class Boy;
    private:
        string phone;
        string name;        
};

void Boy::showYourGirlFriend(Girl& girl)
{
    cout << "GF Name : " << girl.name << endl;
    cout << "GF Phone Number : " << girl.phone << endl;
}

int main(void)
{
    Boy boy(180);
    Girl girl("010-1234-5678", "Younghee");
    boy.showYourGirlFriend(girl);

    return 0;
}