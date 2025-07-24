#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    
    int mat[n][n], diag_sum = 0, super_diag_sum = 0;
    
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    
    for (i = 0; i < n; i++) {
        diag_sum += mat[i][i];
        if (i < n - 1)
            super_diag_sum += mat[i][i + 1];
    }
    
    printf("Main diagonal sum = %d\n", diag_sum);
    printf("Super diagonal sum = %d\n", super_diag_sum);
    
    return 0;
}
