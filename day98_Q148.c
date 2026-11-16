//Q148: Return a structure containing top student's details from a function.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    struct Student top = s[0];
    
    for (int i = 1; i < n; i++) {
        if (s[i].marks > top.marks) {
            top = s[i];
        }
    }
    
    return top;
}

int main() {
    int n;
    
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }
    
    struct Student students[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d (Name Roll Marks): ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }
    
    struct Student topper = getTopStudent(students, n);
    
    printf("\nTop Student: %s | Roll: %d | Marks: %d\n", topper.name, topper.roll, topper.marks);
    
    return 0;
}