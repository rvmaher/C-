#include <iostream>

int main()
{
    double x, y, result;
    char opr;
    std::cout << "Enter First Number:- \n";
    std::cin >> x;
    std::cout << "Enter Second Number:- \n";
    std::cin >> y;
    std::cout << "Operation (/,*,+,-):- \n";
    std::cin >> opr;
    switch (opr)
    {
    case '+':
        result = x + y;
        break;
    case '-':
        result = x - y;
        break;
    case '*':
        result = x * y;
        break;
    case '/':
        result = x / y;
        break;
    default:
        std::cout << "Operation is not valid";
        return 0;
    }
    std::cout << "Result is " << result;
    return 0;
}