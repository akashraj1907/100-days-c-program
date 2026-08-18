//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;

    scanf("%lf %lf %lf", &principal, &rate, &time);

    double simple_interest = (principal * rate * time) / 100.0;

    double compound_interest = principal * (pow(1 + rate / 100.0, time) - 1.0);

    printf("Simple Interest=%g, Compound Interest=%g\n", simple_interest, compound_interest);

    return 0;
}