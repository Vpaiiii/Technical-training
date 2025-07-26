#include <iostream>
using namespace std;

void checkVowel(char ch) {
    if (ch == 'a' || ch == 'A')
        cout << "Vowel" << endl;
    else if (ch == 'e' || ch == 'E')
        cout << "Vowel" << endl;
    else if (ch == 'i' || ch == 'I')
        cout << "Vowel" << endl;
    else if (ch == 'o' || ch == 'O')
        cout << "Vowel" << endl;
    else if (ch == 'u' || ch == 'U')
        cout << "Vowel" << endl;
    else
        cout << "Not a vowel" << endl;
}

int main() {
    char ch;
    cin >> ch;
    checkVowel(ch);
    return 0;
}