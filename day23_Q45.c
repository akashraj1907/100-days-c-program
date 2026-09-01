//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        double numerator = 2.0 * i;
        double denominator = 4.0 * i - 1.0;
        sum += numerator / denominator;
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}