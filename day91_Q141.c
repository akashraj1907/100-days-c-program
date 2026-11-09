//Q141: Print all enum names and integer values using a loop.
#include <stdio.h>

enum Color {
    RED,
    YELLOW,
    GREEN
};

int main() {
    const char* colorNames[] = {
        "RED",
        "YELLOW",
        "GREEN"
    };
    
    int numColors = sizeof(colorNames) / sizeof(colorNames[0]);

    for (int i = 0; i < numColors; i++) {
        printf("%s=%d\n", colorNames[i], i);
    }

    int choice;
    printf("Enter a color index (0 to %d): ", numColors - 1);
    scanf("%d", &choice);
 
    if (choice >= 0 && choice < numColors) {
        printf("You selected: %s = %d\n", colorNames[choice], choice);
    } else {
        printf("Invalid input!\n");
    }
    
    return 0;
}