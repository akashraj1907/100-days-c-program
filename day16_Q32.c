//Q32: Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int n, reversed = 0, remainder, original;

    scanf("%d", &n);

    original = n;

    while (n > 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}