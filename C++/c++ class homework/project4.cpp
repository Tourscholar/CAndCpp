// project4.cpp

#include <iostream>

int main(void)
{
    using namespace std;

    cout << "Input an age of A: ";
    int a;
    cin >> a;
    cout << "Input an age of B: ";
    int b;
    cin >> b;
    if ( a > b)
        cout << "A is older than B" << endl;
    else if ( a < b)
        cout << "B is older than A" << endl;
    else 
        cout << "A and B are the same age" << endl;
    
    return 0;
}