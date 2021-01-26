#include <iostream>
#include <list>

int main(void)
{
    using namespace std;

    list<int> ilist;
    for (int i = 5; i <= 10; ++i)
        ilist.push_back(i);
    
    for (list<int>::iterator it = ilist.begin(); it != ilist.end(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}