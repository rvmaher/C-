#include <iostream>

double volume(double x);
double cube(double);

int main()
{
    double x;
    std::cout << "Enter X:- \n";
    std::cin >> x;
    std ::cout << "Volume is " << volume(x) << "\n";
    std ::cout << "Cube is " << cube(x) << "\n";
    return 0;
}

double volume(double x)
{
    return x * x;
}

double cube(double x)
{
    return x * x * x;
}