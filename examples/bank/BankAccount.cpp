#include "BankAccount.h"

BankAccount::BankAccount(double initial = 0.0) {
    balance = initial;
}

BankAccount::BankAccount(const BankAccount& other) {
    balance = other.balance;
}

BankAccount::~BankAccount() {
    cout << "Account is being deleted." << endl;
}

double BankAccount::getBalance() {
    return balance;
}

void BankAccount::deposit(double amount) {
    if (amount > 0.0) {
        balance += amount;
    } else {
        cout << "Deposit amount must be greater than zero." << endl;
    }
}

void BankAccount::withdraw(double amount) {
    if (amount < balance) {
        balance -= amount;
    } else {
        cout << "Withdrawal amount cannot be greater than balance in account." << endl;
    }
}

SavingsAccount::SavingsAccount(double initial = 0.0, double interest = 0.0) {
    BankAccount(initial);
    interestRate = interest;
}

void SavingsAccount::addInterest() {
    double interest = balance * interestRate;
    balance += interest;
}