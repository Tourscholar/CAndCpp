// carrots.cpp -- food processing program
// use and display a variable

#include <iostream>

int main(void)
{
    using namespace std;

    int carrots;            /* declare an integer variable */

    carrots = 25;           /* assign a value to the variable */
    cout << "I have ";      
    cout << carrots;
    cout << " carrots.\n";
    carrots = carrots - 1;  /* modify the variable */
    cout << "Crunch, crunch. Now I have " << carrots << " carrots.\n";

    return 0;
}