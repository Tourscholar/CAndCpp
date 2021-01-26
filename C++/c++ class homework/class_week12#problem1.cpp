#pragma warning (disable: 4996)
#include <iostream>
#include <cstring>

using namespace std;

class Shape
{
    protected:
        double width, height;
    public:
        Shape(int w = 0, int h = 0) 
        {
            width = w; height = h;
        }
        virtual char * get_name()
        {
            return NULL;
        }
        virtual int get_area()
        {
            return 0;
        }
        virtual ~Shape() {}
};

class Oval : public Shape
{
    private:
        char * name;
    public:
        Oval(const char * n, int w, int h) : Shape(w, h)
        {
            name = new char[20];
            strcpy(name, n);
        }
        char * get_name()
        {
            return name;
        }
        int get_area()
        {
            return (width * height * 3.14);
        }
        ~Oval()
        {
            cout << "Destructor: " << "Oval" << endl;
            cout << "Destructor: " << "Shape" << endl;
        }

};

class Rect : public Shape
{
    private:
        char * name;
    public:
        Rect(const char * n, int w, int h) : Shape(w, h)
        {
            name = new char[20];
            strcpy(name, n);
        }
        char * get_name()
        {
            return name;
        }
        int get_area()
        {
            return (width * height);
        }
        ~Rect()
        {
            cout << "Desturctor: " << "Rect" << endl;
            cout << "Desturctor: " << "Shape" << endl;
        }
};

class Triange : public Shape
{
    private:
        char * name;
    public:
        Triange(const char * n, int w, int h) : Shape(w, h)
        {
            name = new char[20];
            strcpy(name, n);
        }
        char * get_name()
        {
            return name;
        }
        int get_area()
        {
            return(width * height / 2);
        }
        ~Triange()
        {
            cout << "Destructor: " << "Triange" << endl;
            cout << "Destructor: " << "Shape" << endl;
        }
};

int main(void)
{
    Shape * p[3];
    p[0] = new Oval("Flowerpot", 10, 20);
    p[1] = new Rect("Book", 30, 40);
    p[2] = new Triange("Toast", 30, 40);
    for (int i = 0; i < 3; i++)
        cout << p[i]->get_name() << "'s area: " 
             << p[i]->get_area() << endl;
    for (int i = 0; i < 3; i++)
        delete p[i];
    
    return 0;
}

