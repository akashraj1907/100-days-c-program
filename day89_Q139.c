//Q139: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
#include <string.h>
enum MenuChoice {
    ADD,
    SUBTRACT,
    MULTIPLY,
    INVALID
};
enum MenuChoice getChoice(const char *str) {
    if (strcmp(str, "ADD") == 0) return ADD;
    if (strcmp(str, "SUBTRACT") == 0) return SUBTRACT;
    if (strcmp(str, "MULTIPLY") == 0) return MULTIPLY;
    return INVALID;
}

int main() {
    char opStr[20];
    int num1, num2;

    printf("Enter operation and two numbers (e.g., ADD 10 20): ");

    if (scanf("%s %d %d", opStr, &num1, &num2) == 3) {
        enum MenuChoice choice = getChoice(opStr);

        switch (choice) {
            case ADD:
                printf("%d\n", num1 + num2);
                break;
            case SUBTRACT:
                printf("%d\n", num1 - num2);
                break;
            case MULTIPLY:
                printf("%d\n", num1 * num2);
                break;
            default:
                printf("Invalid Operation\n");
                break;
        }
    }

    return 0;
}