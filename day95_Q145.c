//Q145: Store details of 5 students in an array of structures and print all.
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("Enter details for student %d (Name Roll Marks): ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].roll, &students[i].marks);
    }

    printf("\n%-20s %-10s %-10s\n", "Name", "Roll", "Marks");
    printf("----------------------------------------\n");

    for(i = 0; i < 5; i++) {
        printf("%-20s %-10d %-10.2f\n", students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}