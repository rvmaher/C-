#include <iostream>

int main()
{
    int age = 21;
    std::string name = "Ram";
    std::string hobbies[5] = {"Cricket",
                              "Football",
                              "Valleyball",
                              "Bat",
                              "Ball"};
    int* pAge = &age;
    std::string *pName = &name;
    std::string *pHobby = hobbies;
    std::cout << *pAge << "\n";
    std::cout << *pName << "\n";
    std::cout << *pHobby << "\n";
}