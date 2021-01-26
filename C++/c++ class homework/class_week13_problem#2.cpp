// class_week13_problem#2.cpp
#include <iostream>
using namespace std;

template <typename T> void Swap(T &a, T &b) 
{
	T temp = a;
	a = b;
	b = temp;
}

int main(void)
{
	int a = 5, b = 7;
	char c = 'c', d = 'd';
	Swap(a, b);
	Swap(c, d);
	cout << "a = " << a << ", b = " << b << endl;
	cout << "c = " << c << ", d = " << d << endl;

	return 0;
}
