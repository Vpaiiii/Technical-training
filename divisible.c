#include <stdio.h>

int main() {
    int num, divisor;
    printf("Enter a number and a divisor: ");
    scanf("%d %d", &num, &divisor);
    (divisor != 0) ? ((num % divisor == 0) ? printf("Divisible\n") : printf("Not divisible\n")) : printf("Divisor cannot be zero\n");
    return 0;
}
