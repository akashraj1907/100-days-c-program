//Q37: Write a program to find the LCM of two numbers.
#include <stdio.h>

int gcd(int a, int b) {
    
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        printf("%d\n", (a * b) / gcd(a, b));
    }
    return 0;
}