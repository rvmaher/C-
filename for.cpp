#include <iostream>

int main()
{
    int rows, columns;
    char symbol;
    std::cout << "Enter Number of row:- ";
    std::cin >> rows;
    std::cout << "\n Enter Number of columns:- ";
    std::cin >> columns;
    std::cout << "\n Enter Symbol:- ";
    std::cin >> symbol;
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= columns; j++)
        {
            std::cout << symbol << ' ';
        }
        std::cout << "\n";
    };
    return 0;
}