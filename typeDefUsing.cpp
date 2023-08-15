#include <iostream>

namespace first
{
    int x = 5;
};

typedef std::string text_t;
using anotherText_t = std::string;
using namespace first;
int main()
{
    int x = 15;
    text_t name = "ramde";
    std::cout << x << std::endl;
    std::cout << name << "\n";
    std::cout << first::x;
    return 0;
}