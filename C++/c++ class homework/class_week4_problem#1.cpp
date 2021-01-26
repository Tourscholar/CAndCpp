// class_week3_problem#1.cpp

#include <iostream>
#include <cstdlib>              /* 用于产生随机数 */
#include <ctime>

int main(void)
{
    using namespace std;

    srand((unsigned int)time(NULL));        /* Initialize the seed */
    int number;
    cout << "Input total number of elements: ";
    cin >> number;
    
    int * array = new int [number];
    for (int i = 0; i < number; i++)
        array[i] = rand() % 100;
    cout << "Random number: ";
    for (int i = 0; i < number; i++)
    {
        cout << array[i];
        if (i != number - 1)
            cout << ", ";
        else
            cout << endl;
    }

    delete [] array;

    return 0;
}