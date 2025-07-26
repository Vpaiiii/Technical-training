#include <iostream>
#include <cmath>
using namespace std;

double calculateZ(double x, double y) {
    double numerator = log10(exp(x)) + log(sqrt(y));
    double denominator = sin(x) + exp(x) + x * y;
    return numerator / denominator;
}

int main() {
    double x, y;
    cin >> x >> y;
    if (y <= 0) {
        cout << "Invalid input: y must be positive." << endl;
        return 1;
    }
    cout << "Z = " << calculateZ(x, y) << endl;
    return 0;
}