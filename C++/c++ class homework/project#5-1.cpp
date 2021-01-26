// project#5-1.cpp

#include <iostream>

int main(void)
{
    using namespace std;

    int i, j;
    int k = 5;
    
    for (i = 1; i <= k; i++)
    {
        for (j = 1; j <= k - i; ++j)
            cout << " ";
        for (j = 1; j <= 2 * i - 1; ++j)
            cout << "*";
        
        cout << endl;
    }

    return 0;
}