#include <iostream>

using text = std::string;

text concateStrings(text text12, text text22);
int main()
{
    text text1, text2;
    std::cin >> text1;
    std::cin >> text2;
    text fullName = concateStrings(text1, text2);
    std::cout << fullName;
    return 0;
}

text concateStrings(text text1, text text2)
{
    return text1 + " " + text2;
}