//Q143: Define a struct with enum Gender and print person's gender.
#include <stdio.h>
#include <string.h>
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    enum Gender gender;
};

int main() {
    char input[50];
 
    printf("Enter Gender (e.g., Gender=MALE): ");

    if (scanf("%s", input) != 1) {
        return 1;
    }
    
    struct Person p;
    char genderStr[20];
 
    if (sscanf(input, "Gender=%s", genderStr) == 1) {
        if (strcmp(genderStr, "MALE") == 0) {
            p.gender = MALE;
            printf("Male\n");
        } else if (strcmp(genderStr, "FEMALE") == 0) {
            p.gender = FEMALE;
            printf("Female\n");
        } else {
            p.gender = OTHER;
            printf("Other\n");
        }
    }
    
    return 0;
}