// class Box

#include <iostream>

class Box
{
public:
    Box() {}
    double volume() {return height * width * length;}
    void print()
    {
        std::cout << height << " " << width << " " << length << std::endl;
    }

    double height, width, length;
};

int main(void)
{
    Box * box = new Box();
    
    box->height = box->width = box->length = 10;
    box->print();
    std::cout << box->volume();

    delete box;
    return 0;
}