//Q28: Write a program to print the product of all even numbers from 1 to n.
#include <stdio.h>

int main() {
    long long n, product = 1;
    int hasEven = 0;

    scanf("%lld", &n);

    for (long long i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            product *= i;
            hasEven = 1;
        }
    }
 
    if (hasEven) {
        printf("%lld\n", product);
    } else {
        printf("0\n");
    }
    
    return 0;
}