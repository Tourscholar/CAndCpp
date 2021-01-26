#include <iostream>

namespace three_dim{

class Box{
public:
    void print(){
        std::cout << "Box";
        std::cout << height << " " << width << " " << length << std::endl;
    }
    double height, width, length;
};
}