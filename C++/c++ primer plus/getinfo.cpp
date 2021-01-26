// getinfo.cpp -- input and output
#include <iostream>

int main(void)
{
    using namespace std;

    int carrots;

    cout << "How many carrots do you have?\n";
    /* 如果不添加命名空间声明,则等价于std::cout */
    cin >> carrots;             /* c++ input */
    cout << "Here are two more.";
    carrots = carrots + 2;
    cout << "Now you have " 
         << carrots 
         << " carrots.\n";
    /* 将4条输出语句合并微一条 */
    return 0;
}