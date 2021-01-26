//assgn_st.cpp -- assigning structures

#include <iostream>

struct inflatable
{
    std::string name;           /* string 包含在命名namespace std中 */
    float volume;
    double price;
};

int main(void)
{
    using namespace std;
    inflatable bouqet = 
    {
        "sunflowers",
        0.20,
        12.49
    };
    inflatable choice;
    cout << "bouquet: " << bouqet.name << " for $";
    cout << bouqet.price << endl;

    choice = bouqet;                    /* assign one structure to another */
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;

    return 0;
}