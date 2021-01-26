#include <iostream>

class X
{
    public:
        X() {}
        friend class Y;
        friend int f(void);
    private:
        int a, b, c;
};

class Y
{
    public: 
        Y() {}
        void func(X& var)
        {
            var.a = var.b = var.c = 0;
        }
};

int f(void)
{
    X x;
    return x.a + x.b + x.c;
}