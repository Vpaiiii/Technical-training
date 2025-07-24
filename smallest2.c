#include <stdio.h>

int main() {
    int num1, num2, smallest;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Using conditional (ternary) operator to find the smallest
    smallest = (num1 < num2) ? num1 : num2;

    // Output the result
    printf("The smallest number is: %d\n", smallest);

    return 0;
}
