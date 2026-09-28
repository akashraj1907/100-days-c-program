//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char date[15];
    char day[3], year[5];
    
    printf("Enter a date in dd/04/yyyy format: ");
    if (scanf("%14s", date) == 1) {

        strncpy(day, date, 2);
        day[2] = '\0';

        strncpy(year, date + 6, 4);
        year[4] = '\0';

        printf("%s-Apr-%s\n", day, year);
    }

    return 0;
}