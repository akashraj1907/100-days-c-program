//Q142: Show that enums store integers by printing assigned values.
#include <stdio.h>
enum Status {
    SUCCESS,
    FAILURE,   
    TIMEOUT    
};

int main() {

    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);
    
    return 0;
}