#include <iostream>

int main()
{
    int *ptr = nullptr;
    int x = 21;
    // ptr = &x;
    if (ptr != nullptr)
    {
        std::cout << "Something in here"
                  << "\n";
        std::cout << *ptr << "\n";
    }
    else
    {
        std::cout << "Nothing in here";
    }
}