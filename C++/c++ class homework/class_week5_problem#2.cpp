// class_week5_problem#2.cpp

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
/* 关于<alorithm>库函数:https://blog.csdn.net/CCodeFm/article/details/79867611 */

using namespace std;

int main(void)
{
    int n;
    vector <int> ivec;
    vector <int>::iterator it;
    srand((unsigned int) time(NULL));

    cout << "Input the number of vectors:\n";
    cin >> n;

    for (int i = 0; i < n; i++)
        ivec.push_back(rand() % 100);
    sort(ivec.begin(), ivec.end());
    for (it = ivec.begin(); it != ivec.end(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}