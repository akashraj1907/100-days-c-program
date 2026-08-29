//Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    long long num, product = 1;
    int digit, found = 0;

    scanf("%lld", &num);
    if (num < 0) num = -num;

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            found = 1;
        }
        num /= 10;
    }

    printf("%lld\n", product);
    return 0;
}