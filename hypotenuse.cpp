#include <iostream>
#include <cmath>
int main()
{
    double x, y, hyp;
    std::cout << "x :- ";
    std::cin >> x;
    std::cout << "y :- ";
    std::cin >> y;
    hyp = sqrt(pow(x, 2) + pow(y, 2));
    std::cout << "Hypotenuse is " << hyp;
    return 0;
}