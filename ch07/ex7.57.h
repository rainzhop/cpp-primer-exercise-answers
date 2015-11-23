#include <iostream>

class Account {
    public:
        Account(double a):amount(a) {}
        void settle() { amount += amount * rate; }
        void showAmount() { std::cout << amount << std::endl; }
        static double rate;
    private:
        double amount;
        //static const double rate = 0.5;
};

double Account::rate = 0.5;
