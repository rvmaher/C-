#include <iostream>

int main()
{
    int size;
    char *array = NULL;
    std::cout << "Enter Elements to enter:- \n";
    std::cin >> size;
    array = new char[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter #" << i + 1 << ":-";
        std::cin >> array[i];
        std::cout << "\n";
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    return 0;
}