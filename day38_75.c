//Q75: Add two matrices.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and columns for first matrix: ");
    if (scanf("%d %d", &r1, &c1) != 2) return 0;

    int a[r1][c1];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns for second matrix: ");
    if (scanf("%d %d", &r2, &c2) != 2) return 0;

    int b[r2][c2];
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if (r1 != r2 || c1 != c2) {
        printf("\nMatrices cannot be added (dimensions do not match).\n");
        return 0;
    }

    printf("\nSum of the matrices:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d", a[i][j] + b[i][j]);
            if (j < c1 - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}