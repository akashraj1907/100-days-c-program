//Q16: Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

int main() {
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2) {
        if (num1 >= num3) {
            printf("Largest is %d\n", num1);
        } else {
            printf("Largest is %d\n", num3);
        }
    } else {
        if (num2 >= num3) {
            printf("Largest is %d\n", num2);
        } else {
            printf("Largest is %d\n", num3);
        }
    }

    return 0;
}