//Q35: Write a program to print all factors of a given number.
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}