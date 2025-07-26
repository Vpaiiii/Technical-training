#include <iostream>
using namespace std;

int minimum(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << "Minimum: " << minimum(x, y) << endl;
    return 0;
}