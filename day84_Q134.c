//Q134: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
#include <stdio.h>
enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    int inputDay;

    const char *dayNames[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", 
        "THURSDAY", "FRIDAY", "SATURDAY"
    };

    printf("Enter day index (0-6): ");
    scanf("%d", &inputDay);

    if (inputDay >= SUNDAY && inputDay <= SATURDAY) {
        printf("%s = %d\n", dayNames[inputDay], inputDay);
    } else {
        printf("Invalid input! Please enter a number between 0 and 6.\n");
    }

    return 0;
}