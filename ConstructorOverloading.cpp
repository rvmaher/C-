#include <iostream>

class Pizza
{
public:
    std::string topping1;
    std::string topping2;
    Pizza() {}
    Pizza(std::string topping1)
    {
        this->topping1 = topping1;
        std::cout << topping1 << "\n";
    }
    Pizza(std::string topping1, std::string topping2)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
    void takePizza()
    {
        std::cout << "Take your " << topping1 << ' ' << topping2 << " "
                  << "Pizza!!"
                  << "\n";
    }
};

int main()
{
    Pizza pizza1;
    Pizza pizza2("Pepperoni");
    Pizza pizza3("Chesse", "Pineapple");
    pizza1.takePizza();
    pizza2.takePizza();
    pizza3.takePizza();
    return 0;
}