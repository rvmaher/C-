#include <iostream>
struct Car
{
    std::string model;
    std::string color;
    int price;
};
void printCar(Car &car);
void paintCar(Car &car, std::string color);

int main()
{
    Car car;
    car.price = 12222;
    car.color = "pink";
    car.model = "Corvette";
    printCar(car);
    return 0;
};

void printCar(Car &car)
{
    paintCar(car, "red");
    std::cout << car.color << "\n";
    std::cout << car.color << "\n";
    std::cout << car.color << "\n";
}

void paintCar(Car &car, std::string color)
{
    car.color = color;
}