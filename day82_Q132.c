//Q132: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("info.txt", "r");
    
    if (file == NULL) {
        printf("Error: Could not open file numbers.txt\n");
        return 1;
    }

    int num;
    int count = 0;
    long long sum = 0;

    printf("Input numbers: ");

    while (fscanf(file, "%d", &num) == 1) {
        printf("%d ", num);
        sum += num;
        count++;
    }
    printf("\n"); 

    fclose(file);

    if (count == 0) {
        printf("The file contains no valid integers.\n");
    } else {
        double average = (double)sum / count;
        printf("Sum = %lld\n", sum);
        printf("Average = %.2f\n", average);
    }

    return 0;
}