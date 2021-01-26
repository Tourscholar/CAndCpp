// waiting.cpp -- using clock() in a time-delay loop
#include <iostream>
#include <ctime>
int main()
{
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    // CLOCKS_PER_SEC为符号常量, 等于每秒钟包含的系统时间单位数
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay)
        ;
    cout << "done\a\n";
    return 0;
}