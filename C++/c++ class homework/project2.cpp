// project2.cpp

#include <iostream>

int main(void)
{
    using namespace std;

    cout << "Find Size of fundamental data types: " << endl;
    cout << "The sizeof(chat) is:       " << sizeof(char) << " bytes" << endl;
    cout << "szieof(short) is      " << sizeof(short) << " bytes" << endl;
    cout << "sizeof(int) is:        " << sizeof(int) << " bytes" << endl;
    cout << "sizeof(long) is:       " << sizeof(long) << " bytes" << endl;
    cout << "sizeof(long long) is:      " << sizeof(long long)
         << " bytes" << endl;
    cout << "sizeof(flaot) is:      " << sizeof(float) << " bytes" << endl;
    cout << "sizeof(double) is:         " << sizeof(double) << " bytes" << endl;
    cout << "sizeof(long double) is:        " << sizeof(long double) 
         << " bytes" << endl;
    cout << "sizeof(bool) is:       " << sizeof(bool) << " bytes" << endl;

    return 0;
}