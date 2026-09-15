//Q73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int rows, cols;

    if (scanf("%d %d", &rows, &cols) != 2) {
        return 0;
    }

    int matrix[rows][cols];
    int rowSums[rows];

    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0;
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSums[i] += matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        printf("%d", rowSums[i]);
        if (i < rows - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}