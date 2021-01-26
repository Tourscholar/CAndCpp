#include <iostream>

using namespace std;

class Box
{
    public:
    Box() : height(0), width(0), length(0), area(0), volume(0) {}

    void set(double h, double w, double l)
    {
        height = h; width = w; length = l;
        area = 2 * (h * w + w * l + l * h);
        volume = h* w * l;
    }
    void print() const
    {
        cout << "Box    :(" << height << ", " << width << ", " << length << ")"
             << endl; 
    }
    double height, width, length;
    double area, volume;
};

int main(void)
{
    Box box1;
    box1.set(1, 2, 3);
    box1.print();
    box1.set(30, 30, 30);
    box1.print();

    return 0;
}