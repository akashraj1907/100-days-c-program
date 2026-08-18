//Q8: Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int sum = n * (n + 1) / 2;

    printf("Sum=%d\n", sum);

    return 0;
}