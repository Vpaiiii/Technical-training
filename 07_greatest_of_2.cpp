#include <iostream>
using namespace std;

int greatest(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << "Greatest: " << greatest(x, y) << endl;
    return 0;
}