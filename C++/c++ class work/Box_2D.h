#include <iostream>

namespace two_dim {

class Box {
public:
    void print() {
        std::cout << "### box ###" << std::endl;
        std::cout << height << " " << width << " " << length << std::endl;
    }
    double height, width, length;
};
}