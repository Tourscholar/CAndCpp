// class_week4_problem#3.cpp

#include <iostream>

void printMean(int *, int);

int main(void)
{
    using namespace std;

    int n;
    cout << "How many students? ";
    cin >> n;
    int * grades = new int[n];
    for (int i = 0; i < n; i++)
    {
        int mark;
        cout << "Input Grade for Studen" << (i + 1) << "? : ";
        cin >> mark;
        grades[i] = mark;
    }
    printMean(grades, n);               /* call the function with dynamic array */

    return 0;
}

void printMean(int * a, int b)
{
    using std::cout;
    using std::endl;
    double result = 0;
    for (int i = 0; i < b; i++)
    {
        result = a[i] + result;
    }
    cout << "Mean: " << result / b << endl;
    
    delete [] a;
}