#include <iostream>
#include <fstream>
int main(void)
{
    std::ifstream fs_1("a.txt");
    std::ofstream fs_2("b.txt");
    std::fstream out_fs("test.txt", std::fstream::out);

    int i;

    fs_1 >> i;
    fs_2 << "Programming Methdology" << std::endl;
    out_fs << "is easy";
    if (fs_1.is_open())
        std::cout << i << std::endl;
    else 
        std::cout << "File is not found" << std::endl;
    fs_1.close(); fs_2.close(); out_fs.close();

    return 0;
}