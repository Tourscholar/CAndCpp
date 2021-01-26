// Problem#1.cpp

#include <iostream>
#include <cstdlib>
#include <ctime>

int max(int[]);

int main(void)
{
    using namespace std;

    srand((unsigned int) time(NULL));
    int array[10];
    for (int i = 0; i < 10; i++)
        array[i] = rand() % 100;
    cout << "Random number: ";
    for (int i = 0; i < 10; i++)
    {
        cout << array[i];
        if (i != 9)
            cout << ", ";
        else 
            cout << endl;
    }
    cout << "Maximum number is " << max(array) << endl;

    return 0;
}

int max(int n[])
{
    int max, j;
    max = n[0];
    for (int i = 1; i < 10; i++)
    {
        max = (max > n[i] ? max : n[i]);
            continue;
    }
    return max;
}