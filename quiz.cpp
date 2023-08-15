#include <iostream>

std::string questions[3] = {
    "1. Who discovered neutron?", "2. Who created Javascript?", "3. What is Tritanopia?"};

std::string answers[][2] = {{"A. James Chadwick", "B. Newton"}, {"A. Brendan Eich", "B. Elon Musk"}, {"A. Absence of Blue", "B. Absence of Red"}};

char answerKeys[] = {'A', 'A', 'A'};

int main()
{
    std::cout << "**********************************************************"
              << "\n";
    std::cout << "Quiz"
              << "\n";
    std::cout << "**********************************************************"
              << "\n";
    char answer;
    int total = 0;
    int size = sizeof(questions) / sizeof(questions[0]);
    for (int i = 0; i < size; i++)
    {
        std::cout << questions[i] << "\n";
        for (int j = 0; j < sizeof(answers[i]) / sizeof(answers[i][j]); j++)
        {
            std::cout << answers[i][j] << "\n";
        }
        std::cin >> answer;
        if (toupper(answer) == answerKeys[i])
        {
            total += 1;
        }
        std::cout << "\n";
    }
    std::cout << "Your Score is " << total
              << "\n";
    return 0;
}