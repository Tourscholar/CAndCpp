// class Box

#include <iostream>

class Box
{
public:
    Box(double h, double w, double l) : height(h), width(w), length(l) {}
    double volume() {return height * width * length;}
    void print() 
    {
        std::cout << height << " " << width << " " << length << std::endl;
    }
private:
    double height, width, length;
};

int main(void)
{
    Box b(10, 20, 30);
    b.print();
    std::cout << b.volume() << std::endl;

    return 0;
}