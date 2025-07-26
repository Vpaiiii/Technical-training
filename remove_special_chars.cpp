#include <iostream>
#include <cctype>  // for isalnum()
using namespace std;

// Function to remove special characters
string removeSpecialChars(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (isalnum(str[i])) {
            result += str[i];
        }
    }
    return result;
}

int main() {
    string input;

    cout << "Enter a string: ";
    cin >> input;  // use getline(cin, input) if you want full sentence

    string cleaned = removeSpecialChars(input);

    cout << "String without special characters: " << cleaned << endl;

    return 0;
}