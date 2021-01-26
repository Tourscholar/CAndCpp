#include <iostream>

using namespace std;

class Book
{
    public:
        Book();
        Book(const char t[], const char pub[], int y, int pr);
        void print();
        ~Book();
    private:
        char * title;
        char * publisher;
        int year;
        int price;
};

Book::Book()
{
    title = new char[20];
    publisher = new char[20];
    year = 0;
    price = 0;
}

Book::Book(const char t[], const char pub[], int y, int pr)
{
    title = new char[20];
    for (int i = 0; i < 20; i++)
        title[i] = t[i];
    publisher = new char[20];
    for (int i = 0; i < 20; i++)
        publisher[i] = pub[i];
    year = y;
    price = pr;
}

Book::~Book()
{
    delete [] title;
    delete [] publisher;
}

void Book::print()
{
    cout << "Title : " << title << "\nPublisher : " << publisher << "\nYear : "
         << year << "\nPrice : " << price << endl;
}

int main(void)
{
    Book book1("C++ Primer", "Addison-Wesley", 1989, 39000);
    book1.print();
    Book book2 = book1;
    book2.print();
    Book book3(book1);
    book3.print();

    return 0;
}
