//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase alphabet\n");
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase alphabet\n");
    } 
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } 
    else {
        printf("Special character\n");
    }

    return 0;
}