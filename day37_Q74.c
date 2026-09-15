//Q74: Find the transpose of a matrix.
#include <stdio.h>

int main() {
    int rows, cols;

    if (scanf("%d %d", &rows, &cols) != 2) {
        return 0;
    }
    
    int matrix[rows][cols];
 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d", matrix[i][j]);
            if (i < rows - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}