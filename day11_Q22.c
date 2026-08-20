//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    double cp, sp, difference, percentage;


    scanf("%lf %lf", &cp, &sp);

    if (sp > cp) {

        difference = sp - cp;
        percentage = (difference / cp) * 100.0;
        printf("Profit %.0f%%\n", percentage);
    } 
    else if (cp > sp) {

        difference = cp - sp;
        percentage = (difference / cp) * 100.0;
        printf("Loss %.0f%%\n", percentage);
    } 
    else {

        printf("No Profit No Loss\n");
    }

    return 0;
}