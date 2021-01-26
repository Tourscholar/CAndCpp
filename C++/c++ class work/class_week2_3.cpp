#include <iostream>

int volume(int h, int w, int i) {return h * w * i;}
int area(int h, int w, int i) {return 2 * (h * w + w * i + i * h);}

int main(void)
{
    using namespace std;

    cout << "The volume of box1 is " << volume(3, 5, 7) << endl;
    cout << "The area of box1 is " << area(3, 5, 7) << endl;
    cout << "The area of box2 is " << area(10, 20, 30) << endl;
    cout << "The area of box3 is " << area(15, 25, 35) << endl;

    return 0;
}