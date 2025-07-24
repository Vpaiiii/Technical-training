#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter size: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        // N
        for (j = 0; j < n; j++)
            if (j == 0 || j == n - 1 || j == i)
                printf("*");
            else
                printf(" ");
        printf("  ");
        
        // I
        for (j = 0; j < n; j++)
            if (i == 0 || i == n - 1)
                printf("*");
            else if (j == n / 2)
                printf("*");
            else
                printf(" ");
        printf("  ");
        
        // T
        for (j = 0; j < n; j++)
            if (i == 0)
                printf("*");
            else if (j == n / 2)
                printf("*");
            else
                printf(" ");
        printf("  ");
        
        // T
        for (j = 0; j < n; j++)
            if (i == 0)
                printf("*");
            else if (j == n / 2)
                printf("*");
            else
                printf(" ");
        printf("  ");
        
        // E
        for (j = 0; j < n; j++)
            if (j == 0 || i == 0 || i == n - 1 || i == n / 2)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
    return 0;
}
