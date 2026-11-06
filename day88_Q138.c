//Q138: Assign explicit values starting from 10 and print them.
#include <stdio.h>
enum AlphabetValues {
    A = 10, B, C, D, E, F, G, H, I, J, K, L, M, 
    N, O, P, Q, R, S, T, U, V, W, X, Y, Z
};

int main() {
    char end_char;

    printf("Enter the end character (A to Z): ");
    scanf(" %c", &end_char);

    if (end_char >= 'a' && end_char <= 'z') {
        end_char = end_char - 32;
    }

    if (end_char >= 'A' && end_char <= 'Z') {
        printf("\n--- Output ---\n");

        int enum_values[] = {
            A, B, C, D, E, F, G, H, I, J, K, L, M, 
            N, O, P, Q, R, S, T, U, V, W, X, Y, Z
        };

        int limit = end_char - 'A';

        for (int i = 0; i <= limit; i++) {
            printf("%c = %d\n", 'A' + i, enum_values[i]);
        }
    } else {
        printf("Invalid input! Please enter a valid letter from A to Z.\n");
    }

    return 0;
}