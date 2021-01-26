// eof.cpp --

#include <iostream>

int main(void)
{
    using namespace std;

    int ival, sum = 0;

    while (cin >> ival, !cin.eof())
    {
        cout << "Sum : " << sum << endl;
    }
    return 0;
}