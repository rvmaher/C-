#include <iostream>

int main()
{

    int num1, num2, num3;
    num1 = rand() % 6;
    num2 = rand() % 6;
    num3 = rand() % 6;
    std::cout << time(0);
    std::cout << num1 << "\n";
    std::cout << num2 << "\n";
    std::cout << num3 << "\n";
    return 0;
}