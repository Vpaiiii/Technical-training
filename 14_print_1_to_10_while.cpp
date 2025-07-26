#include <iostream>
using namespace std;

void printNumbers() {
    int i = 1;
    while (i <= 10) {
        cout << i << " ";
        i++;
    }
    cout << endl;
}

int main() {
    printNumbers();
    return 0;
}