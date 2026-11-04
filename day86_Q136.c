//Q136: Create an enum for months and print how many days each month has.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef enum {
    JAN, FEB, MAR, APR, MAY, JUN, 
    JUL, AUG, SEP, OCT, NOV, DEC, 
    INVALID
} Month;

void toUpperCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper((unsigned char)str[i]);
    }
}

Month getMonthEnum(const char *str) {
    if (strcmp(str, "JAN") == 0) return JAN;
    if (strcmp(str, "FEB") == 0) return FEB;
    if (strcmp(str, "MAR") == 0) return MAR;
    if (strcmp(str, "APR") == 0) return APR;
    if (strcmp(str, "MAY") == 0) return MAY;
    if (strcmp(str, "JUN") == 0) return JUN;
    if (strcmp(str, "JUL") == 0) return JUL;
    if (strcmp(str, "AUG") == 0) return AUG;
    if (strcmp(str, "SEP") == 0) return SEP;
    if (strcmp(str, "OCT") == 0) return OCT;
    if (strcmp(str, "NOV") == 0) return NOV;
    if (strcmp(str, "DEC") == 0) return DEC;
    return INVALID;
}

int main() {
    char input[20];

    printf("Enter month (e.g., FEB): ");
    
    if (scanf("%19s", input) == 1) {
        toUpperCase(input); 
        
        Month month = getMonthEnum(input);

        switch (month) {
            case JAN:
            case MAR:
            case MAY:
            case JUL:
            case AUG:
            case OCT:
            case DEC:
                printf("31 days\n");
                break;
            case APR:
            case JUN:
            case SEP:
            case NOV:
                printf("30 days\n");
                break;
            case FEB:
                printf("28 or 29 days\n");
                break;
            default:
                printf("Invalid Month\n");
                break;
        }
    }

    return 0;
}