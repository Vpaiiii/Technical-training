#include <iostream>
using namespace std;

int checkBalance(int balance) {
    cout << "Current balance: " << balance << endl;
    return balance;
}

int deposit(int balance, int amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Deposit successful. New balance: " << balance << endl;
    } else {
        cout << "Invalid deposit amount." << endl;
    }
    return balance;
}

int withdraw(int balance, int amount) {
    if (amount <= 0) {
        cout << "Invalid withdrawal amount." << endl;
    } else if (amount > balance) {
        cout << "Insufficient balance." << endl;
    } else {
        balance -= amount;
        cout << "Withdrawal successful. Remaining balance: " << balance << endl;
    }
    return balance;
}

int main() {
    int balance = 1000;
    int choice, amount;

    do {
        cout << "\n--- ATM Menu ---\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance = deposit(balance, amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                balance = withdraw(balance, amount);
                break;
            case 4:
                cout << "Thank you for using the ATM." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }

    } while (choice != 4);

    return 0;
}