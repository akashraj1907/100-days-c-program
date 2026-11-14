//Q143: Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d (Name Roll_No Marks): ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    int topper_index = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[topper_index].marks) {
            topper_index = i;
        }
    }

    printf("\nTopper: %s (Marks: %d)\n", students[topper_index].name, students[topper_index].marks);

    return 0;
}