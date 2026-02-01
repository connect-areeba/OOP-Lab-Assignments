/*2. You are a programmer for the ABC Bank assigned to develop a class that models the basic
workings of a bank account. The class should perform the following tasks:
o Save the account balance.
o Save the number of transactions performed on the account.
o Allow deposits to be made to the account.
o Allow with drawls to be taken from the account.
o Report the current account balance at any time.
o Report the current number of transactions at any time.
Menu
1. Display the account balance
2. Display the number of transactions
3. Display interest earned for this period
4. Make a deposit
5. Make a withdrawal
6. Exit the program*/

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
    int transactions;
public:
    BankAccount(double initialBalance = 0) {
        balance = initialBalance;
        transactions = 0;
    }
    void deposit(double amount) {
        balance += amount;
        transactions++;
    }
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            transactions++;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
    double getBalance() {
        return balance;
    }
    int getTransactions() {
        return transactions;
    }
    double calculateInterest(double rate) {
        return balance * rate / 100;
    }
};
int main() {
    BankAccount account(1000);
    int choice = 0;
    double amount, rate = 5.0;

    while (choice != 6) {
        cout << "------ ABC MENU ------" << endl;
        cout << "1. Display the account balance" << endl;
        cout << "2. Display the number of transactions" << endl;
        cout << "3. Display interest earned for this period" << endl;
        cout << "4. Make a deposit" << endl;
        cout << "5. Make a withdrawal" << endl;
        cout << "6. Exit the program" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Balance: " << account.getBalance() << endl;
            break;
        case 2:
            cout << "Transactions: " << account.getTransactions() << endl;
            break;
        case 3:
            cout << "Interest: " << account.calculateInterest(rate) << endl;
            break;
        case 4:
            cout << "Enter deposit amount: ";
            cin >> amount;
            account.deposit(amount);
            break;
        case 5:
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            account.withdraw(amount);
            break;
        case 6:
            cout << "Program exited." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
        }
    }
    return 0;
}
