#include <iostream>
int factorial(int num);
int main()
{
    int target;
    std::cout << "Enter number to fact:- "
              << "\n";
    std::cin >> target;
    int fact = factorial(target);
    std::cout << fact;
    0;
}

int factorial(int num)
{
    return (num > 0) ? num * factorial(num - 1) : 1;
}