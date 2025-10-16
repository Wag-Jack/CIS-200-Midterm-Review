#include "BankAccount.h"

int main() {
    cout << "Creating BankAccount object..." << endl;
    BankAccount acc1(1000.0);
    cout << "Initial balance: " << acc1.getBalance() << endl;

    cout << "\nDepositing 500..." << endl;
    acc1.deposit(500);
    cout << "New balance: " << acc1.getBalance() << endl;

    cout << "\nAttempting to withdraw 2000..." << endl;
    acc1.withdraw(2000); // should print an error
    cout << "Balance remains: " << acc1.getBalance() << endl;

    cout << "\nWithdrawing 300..." << endl;
    acc1.withdraw(300);
    cout << "New balance: " << acc1.getBalance() << endl;

    cout << "\nCreating SavingsAccount object..." << endl;
    SavingsAccount sav1(2000.0, 0.05);
    cout << "Initial savings balance: " << sav1.getBalance() << endl;

    cout << "\nAdding interest..." << endl;
    sav1.addInterest();
    cout << "Balance after interest: " << sav1.getBalance() << endl;

    cout << "\nProgram ending — destructors will be called automatically.\n";

    return 0;
}