//arith.cpp -- some C++ arithmetic

#include <iostream>

int main(void)
{
    using namespace std;

    float hats, heads;  /* 对于float,C++只保证6位有效数字 */

    cout.setf(ios_base::fixed, ios_base::floatfield); /* fixed-point */
    cout << "Enter a number: ";
    cin >> hats;
    cout << "Enter another number: ";
    cin >> heads;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;

    return 0;
}