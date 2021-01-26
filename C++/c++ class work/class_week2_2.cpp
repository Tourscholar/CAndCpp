#include <iostream>

using namespace std;

class Box
{
    public:
        void print() {cout << height << " " << width << " " << length;};
        double height, width, length;
};

int main(void)
{
    Box box;
    box.height = 3;
    box.width = 5;
    box.length = 7;
    box.print();

    return 0;
}