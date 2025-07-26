#include <iostream>
using namespace std;

void checkEvenOdd(int n) {
    if ((n & 1) == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
}

int main() {
    int num;
    cin >> num;
    checkEvenOdd(num);
    return 0;
}