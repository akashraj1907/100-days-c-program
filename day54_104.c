//Q104: Write a Program to take a positive integer n as input, 
//and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively.
//Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>
#include <math.h>

int main() {
    int n;

    printf("Enter a positive integer n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    /*
     * Mathematical Derivation:
     * Sum from 1 to x = x * (x + 1) / 2
     * Sum from x to n = total_sum - (x * (x - 1) / 2)
     * 
     * Equating both sides gives:
     * x^2 = n * (n + 1) / 2
     * 
     * So, x = sqrt(total_sum). If x * x == total_sum, then x is an integer pivot.
     */

    long long total_sum = (long long)n * (n + 1) / 2;
    long long x = (long long)sqrt(total_sum);

    if (x * x == total_sum) {
        printf("Pivot integer x: %lld\n", x);
    } else {
        printf("Pivot integer x: -1\n");
    }

    return 0;
}