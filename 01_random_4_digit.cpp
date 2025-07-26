#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generateRandom4Digit() {
    return 1000 + rand() % 9000;
}

int main() {
    srand(time(0));
    int randomNumber = generateRandom4Digit();
    cout << "Random 4-digit number: " << randomNumber << endl;
    return 0;
}