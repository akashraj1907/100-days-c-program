//Q34: Write a program to check if a number is prime.
#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    bool isPrime = true;

    if (scanf("%d", &num) != 1) {
        return 1;
    }

    if (num <= 1) {
        isPrime = false;
    } else {

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}