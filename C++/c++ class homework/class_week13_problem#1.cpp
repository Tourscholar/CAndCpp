// class_week13_problem#1.cpp
#include <iostream>
using namespace std;

class Square
{
    private:
        int side;
    public:
        Square(int x = 0) : side(x) {}
        int getSide() const
        {
            return side;
        }   
        int getArea() const
        {
            return side * side;
        }
        Square operator+(const Square &sq) const
        /* operator运算符重载 */
        {
            Square s;
            s.side = this->side + sq.side;
            return s;
        }
        ~Square() {}
        friend Square operator-(const Square &pos1, const Square &pos2);
};
Square operator-(const Square &pos1, const Square &pos2)
{
    Square pos(pos1.side - pos2.side);
    return pos;
}

int main(void)
{
    Square s1(3);
    Square s2(4);

    Square s3 = s1 + s2;
    Square s4 = s2 - s1;
    cout << "Side of s3: " << s3.getSide() << endl;
    cout << "Area of s3: " << s3.getArea() << endl;
    cout << "Side of s4: " << s4.getSide() << endl;
    cout << "Area of s4: " << s4.getArea() << endl;

    return 0;
}