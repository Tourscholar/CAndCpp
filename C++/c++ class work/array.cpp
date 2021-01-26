// class

#include <iostream>

class Array {
public:
    Array() : ptr(NULL) {
        std::cout << "Constructor 0" << std::endl;
    }
    Array(std::size_t num) {
        ptr = new int[num];
        std::cout << "Constructor 1" << std::endl;
    }
    ~Array() {
        if(ptr != NULL) delete [] ptr;
        std::cout << "Destructor" << std::endl;
    }
    int * ptr;
    int a, *b;
};

void f() {
    Array var(10);
}

int main(void)
{
    f();

    return 0;
}


