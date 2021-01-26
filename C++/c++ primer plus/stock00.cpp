// stock00.cpp -- implementing the Stock calss
// version 00

#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string & co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative; "
                  << company << " shares set to 0.\n";
        shares = 0;
    }
    else 
        shares = n;
    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative."
                  << "Transaction is aborted.\n";
    }
    else 
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    
    if (num < 0)
    {
        cout << "Number of shares sold can't be negative."
             << "Transaction is aborted.\n";
    }
    else 
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    std::cout << "Company: " << company
              << "  Shares: " << shares << '\n'
              << "  Share Price: $" << share_val
              << "  Total Worth: $" << total_val << '\n';
}

/* compile with stock00.cpp */
/* usestck0.cpp */

int main(void)
{
    Stock flushall_the_cat;
    
    flushall_the_cat.acquire("NanoSmart", 20, 12.50);
    flushall_the_cat.show();
    flushall_the_cat.buy(15, 18.125);
    flushall_the_cat.show();
    flushall_the_cat.sell(400, 20.00);
    flushall_the_cat.show();
    flushall_the_cat.buy(300000, 40.125);
    flushall_the_cat.show();
    flushall_the_cat.sell(300000, 0.125);
    flushall_the_cat.show();

    return 0;
}
