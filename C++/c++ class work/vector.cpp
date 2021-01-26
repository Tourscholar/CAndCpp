// vector.cpp

#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> ivec;
    for (int i = 5; i <= 10; ++i)
        ivec.push_back(i);
    
    for (std::vector<int>::iterator it = ivec.begin(); it != ivec.end(); ++it)
        std::cout << *it << " ";
    
    std::cout << std::endl;

    return 0;
}