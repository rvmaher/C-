#include <iostream>

void func();
void func(int number);
void func(double number);

int main()
{
    int x;
    double ax;
    std::cin >> x;
    std::cin >> ax;
    func();
    func(x);
    func(ax);
    return 0;
}

void func()
{
    std::cout << "Normal func";
}
void func(int numb)
{
    std::cout << "FO func";
}
void func(double numb)
{
    std::cout << "FO2 func";
}