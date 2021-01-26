// class_week5_problem#3.cpp

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class RanArr
{
    public:
        RanArr()
        {
            srand((unsigned int)time(NULL));
            ar = new int [10];
            for (int i = 0; i < 10; i++)
                ar[i] = rand() % 100;
        }
        void print()
        {
            for (int i = 0; i < 10; i++)
                cout << ar[i] << " " ;
            cout << endl;
        }
        ~RanArr()
        {
            if (ar != NULL) 
                delete [] ar;
        }
    private:
        int * ar;
};

int main(void)
{
    RanArr ran;
    ran.print();

    return 0;
}