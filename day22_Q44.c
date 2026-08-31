//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main() {

    int n;
    printf("Enter the number of terms: ");

    if (scanf("%d", &n) != 1) {
        return 0;
    }

    double sum = 0.0;
    int num = 1;
    int den = 1;

    for (int i = 1; i <= n; i++) {
        sum += (double)num / den;
        num += 2; 
        
        if (i == 1) {
            den = 4;
        } else {
            den += 2;
        }
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}