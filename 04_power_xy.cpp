#include <iostream>
#include <cmath>
using namespace std;

double power(double x, double y) {
    return pow(x, y);
}

int main() {
    double x, y;
    cin >> x >> y;
    cout << "Result: " << power(x, y) << endl;
    return 0;
}