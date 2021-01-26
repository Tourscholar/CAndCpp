#include <iostream>

class Box
{
    public:
        Box(double w, double h, double l) : width(w), height(h), length(l) {}
        Box(const Box& b) : width(b.width), height(b.height), length(b.length)
        {
            std::cout << "Copy Constructor" << std::endl;
        }
    private:
        double width, height, length;
};

int main(void)
{
    Box box(1, 2, 3);

    Box box_1(box);

    return 0;
}