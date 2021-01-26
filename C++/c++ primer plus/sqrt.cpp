// sqrt.pp -- 使用平方根函数

#include <iostream>
#include <cmath>        /* or math.h */

int main(void)
{
    using namespace std;

    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area);      /* 也可double side = sqrt(area) */
    cout << "That's the equivalent of square "
         << side
         << " feet to the side."
         << endl;
    cout << "How fascinating!"
         << endl;

    return 0;
}