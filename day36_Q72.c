//Q72: Find the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int rows, cols;
    int sum = 0;

    if (scanf("%d %d", &rows, &cols) != 2) {
        return 1;
    }

    int matrix[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("%d\n", sum);

    return 0;
}