//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main() {
    double a, b, c;
    
    if (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        if (a == b && b == c) {
            printf("Equilateral\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles\n");
        } else {
            printf("Scalene\n");
        }
    }
    
    return 0;
}