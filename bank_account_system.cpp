#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;
public:
    BankAccount(int accNo, string holder, double initialBalance = 0.0) {
        accountNumber = accNo;
        accountHolder = holder;
        balance = (initialBalance >= 0) ? initialBalance : 0.0;
    }

    void deposit(double amount) {
        if (amount <= 0) {
            cout << "Invalid deposit amount.\n";
            return;
        }
        balance += amount;
        cout << "Deposited " << amount << ".\n";
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount.\n";
        } else if (amount > balance) {
            cout << "Insufficient balance.\n";
        } else {
            balance -= amount;
            cout << "Withdrew " << amount << ".\n";
        }
    }

    double getBalance() const { return balance; }

    void displayAccountInformation() const {
        cout << "Account No: " << accountNumber
             << " | Holder: " << accountHolder
             << " | Balance: " << balance << endl;
    }
};
int main() {
    BankAccount acc1(1001, "Rahim", 5000);
    BankAccount acc2(1002, "Salma", 1500);
    acc1.deposit(2000);
    acc1.withdraw(10000);   // rejected: exceeds balance
    acc1.withdraw(-50);     // rejected: invalid amount
    acc1.displayAccountInformation();
    acc2.deposit(500);
    acc2.withdraw(300);
    acc2.displayAccountInformation();
    // acc1.balance = 1000000;  // compile error: balance is private
    return 0;
}