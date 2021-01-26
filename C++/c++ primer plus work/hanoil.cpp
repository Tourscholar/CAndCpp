// hanoilcpp -- c++实现汉诺塔递归

#include <iostream>
void move(char, char);
void hanoil(int, char, char, char);
int count = 0;
using namespace std;

int main()
{

    cout << "Please enter a number(1~10): ";
    int number;
    cin >> number;
    hanoil(number, 'A', 'B', 'C');
    cout << "Needs " << count << " steps!" << endl;

    return 0;
}

void move(char d, char e)
{
    count++;
    cout << "Step:" << count << " " << d << " -> " << e << endl; 
}

void hanoil(int n, char a, char b, char c)
{
    if (n == 1)
    {
        move(a, c);
    }
    else 
    {
        hanoil(n - 1, a, c, b);
        move(a, c);
        hanoil(n - 1, b, a, c);
    }
}