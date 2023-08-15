#include <iostream>

int main()
{
    std::string fruits[5];
    int size = sizeof(fruits) / sizeof(std::string);
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter Fruit of your choice #" << i + 1 << ":- ";
        std::getline(std::cin, fruits[i]);
        std::cout << "\n";
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << fruits[i] << "\n";
    }
    return 0;
}