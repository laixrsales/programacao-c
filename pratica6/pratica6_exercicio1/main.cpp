/* INF 112 - PROGRAMAÇÃO II
   Prática 6 - Herança e Composição
   Exercício 1 - Conta bancária
   Laís Reis de Sales - 96862
   17 de outubro de 2023
*/

#include <iostream>
#include "savingsAccount.h"

int main(){
    //Criando duas contas
    SavingsAccount saver1 = SavingsAccount(2000);
    SavingsAccount saver2 = SavingsAccount(3000);

    //Imprimindo o balanço mensal
    std::cout << saver1.calculateMonthlyInterest() << std::endl;
    std::cout << saver2.calculateMonthlyInterest() << std::endl;

    //Alterando o atributo estático
    SavingsAccount::modifyInterestRate(3.00);

    //Imprimindo o balanço mensal
    std::cout << saver1.calculateMonthlyInterest() << std::endl;
    std::cout << saver2.calculateMonthlyInterest() << std::endl;

    return 0;
}