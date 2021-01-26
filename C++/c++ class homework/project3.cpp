// project3.cpp

#include <iostream>

int main(void)
{
    using namespace std;

    const int number = 10;
    long result = 1;

    for (int i = 1; i <= number; i++)
        result = i * result;
    cout << "Factorial of 10: " << result << endl;

    return 0;
}