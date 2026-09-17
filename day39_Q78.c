//Q78: Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2) {
        return 0;
    }

    int matrix[100][100];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int diagonal_sum = 0;
    int n = (rows < cols) ? rows : cols;

    for (int i = 0; i < n; i++) {
        diagonal_sum += matrix[i][i];
    }

    printf("%d\n", diagonal_sum);

    return 0;
}