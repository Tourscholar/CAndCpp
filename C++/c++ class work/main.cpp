#include "Box_3D.h"
#include "Box_2D.h"
using namespace three_dim;

int main(void)
{
    Box box;
    box.height = 3;
    box.width = 5;
    box.length = 7;
    box.print();

    return 0;
}