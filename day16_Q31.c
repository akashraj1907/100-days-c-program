//Q31: Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int n, remainder;
    long long binary = 0;
    long long place = 1;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int temp = n;
    while (temp > 0) {
        remainder = temp % 2;
        binary = binary + remainder * place;
        temp = temp / 2;
        place = place * 10;
    }

    printf("Output: %lld\n", binary);

    return 0;
}