#include <iostream>
void happyBirthday(std::string name, int age);
int getAge();

int main()
{
    std::string name;
    std::cout << "Enter name of birthday boy! ";
    std::cin >> name;
    int age = getAge();
    happyBirthday(name, age);
    return 0;
}

void happyBirthday(std::string name, int age)
{
    std::cout << "Happy birthday to you " << name << "\n";
    std::cout << "Happy birthday to you " << name << "\n";
    std::cout << "Happy birthday to you dear " << name << "\n";
    std::cout << "Happy birthday to you " << name << "\n";
    std::cout << "You are " << age << " now";
}

int getAge()
{
    int age;
    std::cout << "Enter your age:- ";
    std::cin >> age;
    std::cout << "\n";
    return age;
}