#include <iostream>

class Car
{
public:
    std::string model = "Corvette";
    std::string color = "Red";
    int year = 2023;
    void accelerate()
    {
        std::cout << "You accelerated" << this->model;
    }
    void brake()
    {
        std::cout << "You Pressed Brake";
    }
};

int main()
{
    Car car;
    std::cout << car.model << "\n";
    std::cout << car.color << "\n";
    car.brake();
    return 0;
}