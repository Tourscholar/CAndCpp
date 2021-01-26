// class

#include <iostream>

class Box
{
public:
    Box() {}
    void set(double h, double w, double l)
    {
        height = h; width = w; length = l;
    }
    double volume() const {return height * width * length;}
    double height, width, length;
};

int main(void)
{
    Box box;
    box.set(1, 1, 1);
    std::cout << box.volume() << std::endl;

    return 0;
}