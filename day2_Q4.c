//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#include <math.h>

int main() {
    double radius;

    scanf("%lf", &radius);

    double area = M_PI * pow(radius, 2);
    double circumference = 2 * M_PI * radius;

    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}