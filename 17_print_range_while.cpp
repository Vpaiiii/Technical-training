#include <iostream>
using namespace std;

void printRange(int start, int end) {
    while (start <= end) {
        cout << start << " ";
        start++;
    }
    cout << endl;
}

int main() {
    int start, end;
    cin >> start >> end;
    printRange(start, end);
    return 0;
}