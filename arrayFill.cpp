#include <iostream>
const int size = 99;
int main()
{
    int array[size];
    std::fill(array, array + (size / 3), 40);
    std::fill(array + (size / 3), array + size, 80);
    std::cout << "this";
    for (int i=0; i < size-1; i++)
    {
        std::cout << array[i] << "\n";
    }
    return 0;
}