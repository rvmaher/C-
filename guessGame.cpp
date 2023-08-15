#include <iostream>

int main()
{
    int x, guess;
    int tries = 1;
    srand(time(0));
    x = rand() % 100 + 1;
    do
    {
        std::cout << "Enter your guess(1-100) :- ";
        std::cin >> guess;
        std::cout << "\n";
        if (guess > x)
        {
            std::cout << "guess something lower than that! \n";
        }
        else if (guess < x)
        {
            std::cout << "guess something bigger than that \n";
        }
        else
        {
            std::cout << "Guessed it right. #Try:- " << tries << "";
        }
        std::cout << "\n";
        tries++;
    } while (guess != x);
}