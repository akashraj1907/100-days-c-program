//Q124: Write a C program that creates a text file named info.txt in write mode. 
//The program should take the user’s name and age as input, and write them to the file using fprintf().
//After writing, display a message confirming that the data was successfully saved.
#include <stdio.h>

int main() {
    FILE *file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char name[50];
    int age;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(file, "Name: %s, Age: %d\n", name, age);

    fclose(file);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}