#include <iostream>
#include <cmath>
using namespace std;

void findRoots(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    double root1, root2;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Real and distinct roots: " << root1 << " and " << root2 << endl;
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        cout << "Real and equal roots: " << root1 << endl;
    }
    else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Complex roots: " << realPart << " + " << imagPart << "i and ";
        cout << realPart << " - " << imagPart << "i" << endl;
    }
}

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    findRoots(a, b, c);
    return 0;
}