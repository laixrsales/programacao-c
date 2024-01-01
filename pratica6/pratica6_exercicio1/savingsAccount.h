#ifndef INF112_SAVINGSACCOUNT_H
#define INF112_SAVINGSACCOUNT_H

class SavingsAccount {
    private:
        double _savingsBalance;
    public:
        static double _annualInterestRate;
        // Construtor
        SavingsAccount(double valor);
        // Calcula juros mensais
        double calculateMonthlyInterest();
        // Modifica a taxa
        static void modifyInterestRate(double taxa);
};

#endif
