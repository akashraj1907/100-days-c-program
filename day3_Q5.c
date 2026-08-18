//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main() {
    double celsius;

    scanf("%lf", &celsius);

    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("Fahrenheit=%.0f\n", fahrenheit);

    return 0;
}