//Q43: Write a program to check if a number is a strong number.
#include <stdio.h>

int main() {
    int n, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while (temp > 0) {
        rem = temp % 10;
        int fact = 1;
        for (int i = 1; i <= rem; i++) fact *= i;
        sum += fact;
        temp /= 10;
    }

    if (sum == n) printf("Strong number\n");
    else printf("Not strong number\n");

    return 0;
}