#include <iostream>
using namespace std;

bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int num;
    cin >> num;
    cout << (isEven(num) ? "True" : "False") << endl;
    return 0;
}