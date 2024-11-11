#include <iostream>

int main()
{
    float credit_amount;
    int procent, profit;
    int year = 0, total_money = 0;

    std::cout << "Input credit amount: ";
    std::cin >> credit_amount;
    std::cout << "Input percentage rate: ";
    std::cin >> procent;
    std::cout << "Input profit for year: ";
    std::cin >> profit;


    int prec = credit_amount / 100 * procent;

    if (prec >= profit)
        std::cout << "It will not be possible to repay the credit";
    else
    {
        while (total_money < credit_amount)
        {
            credit_amount += prec;
            total_money += profit;
            ++year;
        }
        std::cout << "Credit can be repaid in " << year << " year";
    }
}