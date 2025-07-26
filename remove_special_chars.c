#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(isalnum(str[i])) {
            result[j++] = str[i];
        }
    }

    result[j] = '\0';

    printf("String without special characters: %s\n", result);

    return 0;
}