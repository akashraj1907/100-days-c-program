//Q76: Check if a matrix is symmetric.
#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2) return 0;

    int matrix[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (rows != cols) {
        printf("\nFalse (Matrix must be square to be symmetric)\n");
        return 0;
    }

    bool isSymmetric = true;

    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) break;
    }

    if (isSymmetric) {
        printf("\nTrue\n");
    } else {
        printf("\nFalse\n");
    }

    return 0;
}