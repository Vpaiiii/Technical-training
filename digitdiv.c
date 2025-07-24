#include <stdio.h>

int main() {
    int num, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    (sum != 0) ? ((num % sum == 0) ? printf("Divisible\n") : printf("Not divisible\n")) : printf("Sum of digits is zero\n");
    return 0;
}
