#include <vector>
#include <iostream>
using namespace std;

int main(void)
{
    vector<int> vector1;

    vector1.push_back(20);
    vector1.push_back(30);

    cout << "First insert test" << endl;

    // insert item(100) at the position
    vector<int>::iterator iterlnsertPos = vector1.begin();
    vector1.insert(iterlnsertPos, 100);

    // insert 100, 20, 30
    vector<int>::iterator iterEnd = vector1.end();
    for (vector<int>::iterator iterPos = vector1.begin();
        iterPos != iterEnd; ++iterPos)
    {
        cout << "vector1: " << *iterPos << endl;
    }
    cout << "Second insert test" << endl;

    //insert two items(200) at the second position
    iterlnsertPos = vector1.begin();
    ++iterlnsertPos;
    vector1.insert(iterlnsertPos, 2, 200);

    //print 100, 200, 200, 20, 30
    iterEnd = vector1.end();
    for (vector<int>::iterator iterPos = vector1.begin();
        iterPos != iterEnd; ++iterPos)
    {
        cout << "vector1: " << *iterPos << endl;
    }
    cout << "Third insert test" << endl;

    vector<int> vector2;
    vector2.push_back(1000);
    vector2.push_back(2000);
    vector2.push_back(3000);

    iterlnsertPos = vector1.begin();
    vector1.insert(++iterlnsertPos, vector2.begin(), vector2.end());

    iterEnd = vector1.end();
    for (vector<int>::iterator iterPos = vector1.begin();
        iterPos != iterEnd; ++iterPos)
    {
        cout << "vector1: " << *iterPos << endl;
    }

    return 0;
}