#include <stdio.h>

int main() {
    int i, j, n;
    char ch = 'A';
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
