#include <iostream>
using namespace std;

void printNumbers() {
    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= 10);
    cout << endl;
}

int main() {
    printNumbers();
    return 0;
}