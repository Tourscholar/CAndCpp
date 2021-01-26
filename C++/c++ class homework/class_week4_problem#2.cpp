// class_week4_problem#2.cpp

#include <iostream>

using namespace std;
int addition_1(int, int);
void addition_2(int, int, int *);
void addition_3(int, int, int &);

int main(void)
{
    int result1, result2, result3;
    result1 = addition_1(3, 4);
    addition_2(5, 6, &result2);
    addition_3(7, 8, result3);
    cout << result1 << endl;
    cout << result2 << endl;
    cout << result3 <<endl;

    return 0;
}

int addition_1(int a, int b)
{
    return (a + b);
}

void addition_2(int a, int b, int * result)
{
    *result = a + b;
}

void addition_3(int a, int b, int & result)
{
    *(&result) = a + b;
}