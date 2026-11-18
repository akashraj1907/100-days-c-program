//Q150: Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining_date;
};

int main() {
    struct Employee emp;

    printf("Enter Employee Name, ID, and Joining Date (DD MM YYYY): ");

    if (scanf("%s %d %d %d %d", emp.name, &emp.id, &emp.joining_date.day, &emp.joining_date.month, &emp.joining_date.year) == 5) {

        printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n", 
               emp.name, 
               emp.id, 
               emp.joining_date.day, 
               emp.joining_date.month, 
               emp.joining_date.year);
    }

    return 0;
}