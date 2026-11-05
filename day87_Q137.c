//Q137: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>
#include <string.h>
typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT,
    UNKNOWN
} Status;

Status getStatusFromString(const char *str) {
    if (strcmp(str, "SUCCESS") == 0) return SUCCESS;
    if (strcmp(str, "FAILURE") == 0) return FAILURE;
    if (strcmp(str, "TIMEOUT") == 0) return TIMEOUT;
    return UNKNOWN;
}

int main() {
    char input[50];
    
    printf("Enter status (SUCCESS, FAILURE, TIMEOUT): ");
    if (scanf("%49s", input) == 1) {
        Status status = getStatusFromString(input);

        switch (status) {
            case SUCCESS:
                printf("Operation successful\n");
                break;
            case FAILURE:
                printf("Operation failed\n");
                break;
            case TIMEOUT:
                printf("Operation timed out\n");
                break;
            default:
                printf("Invalid status\n");
                break;
        }
    }
    
    return 0;
}