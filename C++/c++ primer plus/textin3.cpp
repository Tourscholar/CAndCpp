// textin3.cpp -- reading chars to end of file
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);
    while (cin.fail() == false)
    // 模拟EOF(检测文件尾)
    {
        cout << ch;
        count++;
        cin.get(ch);
    }
    cout << endl << count << " characters read\n";
    return 0;
}