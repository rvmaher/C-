#include <iostream>

enum Days
{
    sunday,
    monday,
    tuesday,
    wednesday
};

int main()
{
    Days day = sunday;
    switch (day)
    {
    case sunday:
        std::cout << "it is sunday";
        break;
    case monday:
        std::cout << "another "
                  << "\n";
        break;
    }
    return 0;
}