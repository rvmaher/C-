#include <iostream>
class Car
{
public:
    std::string make;
    std::string model;
    int year;
    std::string color;
    Car(std::string make,
        std::string model,
        int year,
        std::string color)
    {
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};
void printCar(Car &car);

int main()
{
    Car car1("Ford", "Mustang", 2021, "yellow");
    Car car2("Chevy", "Corvette", 2023, "red");
    printCar(car1);
    printCar(car2);
}

void printCar(Car &car)
{
    std::cout << car.make << "\n";
    std::cout << car.model << "\n";
    std::cout << car.year << "\n";
    std::cout << car.color << "\n";
}