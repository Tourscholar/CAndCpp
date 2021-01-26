// Problem#2.cpp

#include <iostream>

long fact(int);

int main(void)
{
    using namespace std;

    int number;
    cout << "Input the number: ";
    cin >> number;
    cout << "Factorial of " << number << " : " << fact(number) << endl;

    return 0;
}

long fact(int n)
{
    long result = 1;
    for (int i = 1; i <= n; i++)
        result = result * i;
        
    return result;
}