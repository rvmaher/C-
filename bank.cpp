#include <iostream>
#include <iomanip>
#include <stdlib.h>
double showBalance(double balance);
double withdraw(double balance);
double deposit();
int main()
{
    double balance = 0;
    int action;
    do
    {
        std::cout << "*************Welcome to Bank************** \n \n \n";
        std::cout << "1. Show Balance \n";
        std::cout << "2. Deposit \n";
        std::cout << "3. Withdraw \n";
        std::cout << "4. Exit \n";
        std::cin >> action;
        std::cin.clear();
        fflush(stdin);
        switch (action)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            std::cout << "\n Thank you for visiting bank \n";
            break;
        default:
            std::cout << "Invalid Choice! \n";
            break;
        }
    } while (action != 4);
    return 0;
}

double showBalance(double balance)
{
    std::cout << "Your account balance is: $" << std::setprecision(2) << std::fixed << balance << "\n";
    return 0;
}

double withdraw(double balance)
{
    double withdraw = 0;
    std::cout << "Enter amount to withdraw:- ";
    std::cin >> withdraw;
    if (withdraw < balance)
    {
        return withdraw;
    }
    else
    {
        std::cout << "\n Invalid amout \n";
        return 0;
    }
}

double deposit()
{
    double deposit = 0;
    std::cout << "Enter Amount to deposit:- ";
    std::cin >> deposit;
    if (deposit > 0)
    {
        return deposit;
    }
    else
    {
        std::cout << "\n Entered value is not valid \n";
        return 0;
    }
}