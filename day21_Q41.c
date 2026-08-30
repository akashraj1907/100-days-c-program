//code for c= Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, first, last, temp, divisor = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;
    temp = num;

    while (temp >= 10) {
        temp = temp / 10;
        divisor = divisor * 10;
    }
    first = temp;

    if (divisor == 1) {
        printf("Output: %d\n", num);
        return 0;
    }

    int middle = (num % divisor) / 10;
    int result = (last * divisor) + (middle * 10) + first;

    printf("Output: %d\n", result);

    return 0;
}