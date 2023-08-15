#include <iostream>

int main()
{
    std::string name;
    std::string tail = "@gmail.com";
    std::cout << "Enter your name:=";
    std::cin >> name;
    if (name.empty())
    {
        std::cout << "Empty name";
        return 0;
    };
    name.erase(0, 1);
    std::cout << name.at(0);
    name.insert(0, "@");
    name.append(tail);
    std::cout << name;
}