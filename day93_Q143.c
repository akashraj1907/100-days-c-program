// Q143: Define a struct with enum Gender and print person's gender.
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
    char genderStr[20];
    struct Person p;

    printf("Enter Gender (e.g., Gender=MALE or MALE): ");

    if (scanf("%49s", input) != 1) {
        return 1;
    }

    // Accept either "Gender=MALE" or just "MALE"
    if (sscanf(input, "Gender=%19s", genderStr) != 1) {
        strncpy(genderStr, input, sizeof(genderStr) - 1);
        genderStr[sizeof(genderStr) - 1] = '\0';
    }

    if (strcmp(genderStr, "MALE") == 0) {
        p.gender = MALE;
    } else if (strcmp(genderStr, "FEMALE") == 0) {
        p.gender = FEMALE;
    } else if (strcmp(genderStr, "OTHER") == 0) {
        p.gender = OTHER;
    } else {
        printf("Invalid gender input.\n");
        return 1;
    }

    // Print a descriptive line based on the person's gender
    switch (p.gender) {
        case MALE:
            printf("The person's gender is Male.\n");
            break;
        case FEMALE:
            printf("The person's gender is Female.\n");
            break;
        case OTHER:
            printf("The person's gender is Other.\n");
            break;
    }

    return 0;
}