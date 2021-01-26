#include <iostream>

class Box
{
    public:
        Box(double height, double width, double length)
        {
            this->height = height;
            this->width = width;
            this->length = length;
        }

        double height, width, length;
};

int main(void)
{
    Box * box = new Box(1, 2, 3);
    Box * box2 = new Box(2, 3, 4);

    return 0;
}