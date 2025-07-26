#include <stdio.h>
#include <string.h>

void reverseString(char *s) {
    int i = 0, j = strlen(s) - 1;
    while (i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str[100];
    scanf("%s", str);
    reverseString(str);
    printf("Reversed: %s\n", str);
    return 0;
}