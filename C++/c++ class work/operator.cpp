#include <iostream>

void f(void);

class Array
{
    public:
        Array(std::size_t num) : size(num)
        {
            std::cout << "Constructor 0" << std::endl;
            ptr = new int[num];
        }
        Array(const Array& arr) : size(arr.size)
        {
            std::cout << "Copy Constructor" << std::endl;
            ptr = new int[size];
            for (std::size_t i = 0; i < size; ++i)
                ptr[i] = arr.ptr[i];
        }
        ~Array()
        {
            std::cout << "Destructor Start" << std::endl;
            if (ptr != NULL)
                delete [] ptr;
                std::cout << "Destructor End" << std::endl;
        }

        int * ptr;
        std::size_t size;
};

int main(void)
{
    f();

    return 0;
}
void f(void)
{
    Array array(5);
    Array array0(array);

}

