//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
#include <stdio.h>

int main() {
    int units;
    int bill = 0;

    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    } 
    else if (units <= 200) {

        bill = (100 * 5) + ((units - 100) * 7);
    } 
    else if (units <= 300) {

        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } 
    else {
     
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    printf("Bill: ₹%d\n", bill);

    return 0;
}