#include <iostream>
using namespace std;

char getGrade(int marks) {
    if (marks >= 90 && marks <= 100)
        return 'A';
    else if (marks >= 75)
        return 'B';
    else if (marks >= 60)
        return 'C';
    else if (marks >= 35)
        return 'D';
    else
        return 'F';
}

int main() {
    int marks;
    cin >> marks;
    cout << "Grade: " << getGrade(marks) << endl;
    return 0;
}