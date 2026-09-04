//Q51: Write a program to print the following pattern:
//    5
//   45
//  345
// 2345
//12345
#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 5; i >= 1; i--) {
    
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
    
        for (int k = i; k <= 5; k++) {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}