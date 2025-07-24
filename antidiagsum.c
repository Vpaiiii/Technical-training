#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int mat[n][n], main_diag_sum = 0, opp_diag_sum = 0;

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < n; i++) {
        main_diag_sum += mat[i][i];
        opp_diag_sum += mat[i][n - 1 - i];
    }

    printf("Main diagonal sum = %d\n", main_diag_sum);
    printf("Opposite diagonal sum = %d\n", opp_diag_sum);

    return 0;
}
