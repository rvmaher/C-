#include <iostream>

int main()
{
    double x;
    std::cout << "Enter Number :- \n";
    std::cin >> x;
    double result = 1;
    int numbers[5] = {};
    std::cout << sizeof(numbers) << " sizeof\n";
    for (int number : numbers)
    {
        std::cout << "number" << number << "\n";
    }
    while (x >= 1)
    {
        result *= x;
        x--;
    }
    std::cout << result;
    return 0;
}
