#include <iostream>
#include "savingsAccount.h"

double SavingsAccount::_annualInterestRate = 1.00;

void SavingsAccount::modifyInterestRate(double taxa){
    _annualInterestRate = taxa;
}

SavingsAccount::SavingsAccount(double valor){
    _savingsBalance = valor;
}

double SavingsAccount::calculateMonthlyInterest(){
    double juros = _savingsBalance * (_annualInterestRate / 12);
    _savingsBalance += juros;
    return _savingsBalance;
}

