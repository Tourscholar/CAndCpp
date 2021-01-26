// problem#5-2.cpp

#include <iostream>
 
int main(void)
{
    using namespace std;

    int i, j;

    for (i = 1; i <= 5; i++)
   	   cout << " ";
    cout << "*" << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5-i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2; j++)
        {
            cout << "*";
            for (j = 1; j <= 2*i-1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for (i = 4; i >= 1; i--)
    {
        for (j = 1; j <= 5-i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2; j++)
        {
            cout << "*";
            for(j = 1; j <= 2*i-1; j++)
            {
                cout<< " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for (i = 1; i <= 5; i++)
   	   cout << " ";
    cout << "*" << endl;
 
    return 0;
}