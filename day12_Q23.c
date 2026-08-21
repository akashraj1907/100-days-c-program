//Q23: Write a program to calculate library fine based on late days as follows: 
#include <stdio.h>

int main() {
    int days;
    int fine = 0;

    scanf("%d", &days);

    if (days <= 5) {
        fine = days * 2;
        printf("Fine ₹%d\n", fine);
    } 
    else if (days <= 10) {
     
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Fine ₹%d\n", fine);
    } 
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Fine ₹%d\n", fine);
    } 
    else {
        printf("Membership Cancelled for c code\n");
    }

    return 0;
}