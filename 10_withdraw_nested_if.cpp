#include <iostream>
using namespace std;

void withdraw(int balance, int amount) {
    if (amount > 0) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. Remaining balance: " << balance << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    } else {
        cout << "Invalid withdrawal amount." << endl;
    }
}

int main() {
    int balance, amount;
    cin >> balance >> amount;
    withdraw(balance, amount);
    return 0;
}