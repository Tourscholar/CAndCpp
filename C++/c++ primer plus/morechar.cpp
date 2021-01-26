// morechar.cpp -- the char type and int type contrasted

#include <iostream>

int main(void)
{
    using namespace std;

    char ch = 'M';              /* assign ASCII code ofr M to ch */
    int i = ch;                 /* store same code in an int */
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code:" << endl;
    ch = ch + 1;                /* change character code in ch */
    i = ch;                     /* save new character code in ch */
    cout << "The ASCII code for " << ch << " is " << i << endl;

    // using the cout.put() member function to display a char
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);               /* cout.put()函数只显示一个字符 */

    // using cout.put() to display a char constant 
    cout << '!';
    cout << endl << "Done" << endl;
    
    return 0;
}