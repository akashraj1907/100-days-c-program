//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    int total_seconds;

    scanf("%d", &total_seconds);

    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}