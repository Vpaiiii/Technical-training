#include <iostream>
using namespace std;

bool isPass(int marks) {
    return marks >= 35;
}

int main() {
    int marks;
    cin >> marks;
    cout << (isPass(marks) ? "True" : "False") << endl;
    return 0;
}