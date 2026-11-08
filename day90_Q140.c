//Q140: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>
#include <string.h>
typedef enum {
    ADMIN,
    USER,
    GUEST,
    UNKNOWN
} UserRole;

UserRole getRoleFromString(const char *str) {
    if (strcmp(str, "ADMIN") == 0) return ADMIN;
    if (strcmp(str, "USER") == 0) return USER;
    if (strcmp(str, "GUEST") == 0) return GUEST;
    return UNKNOWN;
}

int main() {
    char input[50];

    printf("Enter user role (ADMIN, USER, GUEST): ");
 
    if (scanf("%s", input) == 1) {
        UserRole role = getRoleFromString(input);

        switch (role) {
            case ADMIN:
                printf("Welcome Admin!\n");
                break;
            case USER:
                printf("Welcome User!\n");
                break;
            case GUEST:
                printf("Welcome Guest!\n");
                break;
            default:
                printf("Invalid Role!\n");
                break;
        }
    }
    
    return 0;
}