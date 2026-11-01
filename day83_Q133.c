//Q133: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    FILE *file;
    int n;

    printf("Enter the number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input for the number of students.\n");
        return 1;
    }

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        
        printf("Enter Name: ");
        scanf("%49s", students[i].name);
        
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].roll);
        
        printf("Enter Marks: ");
        scanf("%d", &students[i].marks);
    }

    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "%s %d %d\n", students[i].name, students[i].roll, students[i].marks);
    }

    fclose(file);

    printf("\n--- Reading records from the file ---\n");

    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    struct Student temp;
    while (fscanf(file, "%49s %d %d", temp.name, &temp.roll, &temp.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", temp.name, temp.roll, temp.marks);
    }

    fclose(file);

    return 0;
}