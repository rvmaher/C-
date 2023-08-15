#include <iostream>
const char choices[3] = {'r', 'p', 's'};
d char getPlayerChoice();
char getComputerChoice();
void checkWinner(char p, char c);
int main()
{
    char player, computer;
    player = getPlayerChoice();
    computer = getComputerChoice();
    checkWinner(player, computer);
    return 0;
}

char getPlayerChoice()
{
    char choice;
    do
    {
        std::cout << "'r' for Rock \n'p' for Paper\n's' for Scissors\n";
        std::cout << "Enter Your Choice :- ";
        std::cin >> choice;
    } while (choice != 'r' && choice != 'p' && choice != 's');
    std::cout << "Your choice is " << choice << "\n";
    return choice;
}

char getComputerChoice()
{
    srand(time(0));
    char p2Choice = choices[rand() % 3];
    std::cout << "Computer's Choice is " << p2Choice << '\n';
    return p2Choice;
}

void checkWinner(char player, char computer)
{
    if (player == computer)
    {
        std::cout << "It's a tie \n";
        return;
    }
    switch (player)
    {
    case 'r':
        if (computer == 'p')
            std::cout << "You Lost!";
        else
            std::cout << "You won!";
        break;
    case 'p':
        if (computer == 'r')
            std::cout << "You Won!";
        else
            std::cout << "You Lost!";
        break;
    case 's':
        if (computer == 'p')
            std::cout << "You Won!";
        else
            std::cout << "You Lost!";
        break;
    }
}