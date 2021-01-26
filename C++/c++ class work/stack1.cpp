#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
    stack<int> stack;
    // push 4, 5, 6 to stack
    stack.push(4);
    stack.push(5);
    stack.push(6);

    cout << "stack size: " << stack.size() << endl;
    
    cout << stack.top() << endl;
    stack.pop();

    cout << stack.top() << endl;
    stack.pop();

    cout << stack.top() << endl;
    stack.pop();

    if (stack.empty())
        cout << "stack is empty " << endl;

    return 0;
}