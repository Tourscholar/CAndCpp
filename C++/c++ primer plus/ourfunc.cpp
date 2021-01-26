// ourfunc.cpp -- 定义属于自己的函数

#include <iostream>
void simon(int);        /* function prototype for simon() */

int main(void)
{
    using namespace std;
    
    simon(3);           /* call the simon() function */
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);       /* call it again */
    cout << "Done!"
         << endl;
    
    return 0;
}

void simon(int n)
{
    using namespace std;
    cout << "Simon says touch your toes "
         << n
         <<" times."
         << endl;
}