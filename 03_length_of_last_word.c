#include <stdio.h>
#include <string.h>

int lengthOfLastWord(const char *s) {
    int len = strlen(s), count = 0;
    for (int i = len - 1; i >= 0; i--) {
        if (s[i] != ' ') count++;
        else if (count > 0) break;
    }
    return count;
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    printf("Length of last word: %d\n", lengthOfLastWord(str));
    return 0;
}