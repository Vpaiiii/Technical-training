#include <iostream>
using namespace std;

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cin >> x >> y;
    swap(x, y);
    cout << "After swap: " << x << " " << y << endl;
    return 0;
}
