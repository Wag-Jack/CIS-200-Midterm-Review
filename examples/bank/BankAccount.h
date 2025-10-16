#pragma once
#include<iostream>
using namespace std;

class BankAccount {
    public:
        BankAccount(double initial = 0.0);
        BankAccount(const BankAccount& other);
        virtual ~BankAccount();
        double getBalance();
        void deposit(double amount);
        void withdraw(double amount);
    protected: //change from private to protected
        double balance;
};

class SavingsAccount : public BankAccount {
    public:
        SavingsAccount(double initial = 0.0, double interest = 0.0);
        void addInterest();
    private:
        double interestRate;
};