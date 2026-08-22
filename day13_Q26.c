//Q26: Write a program to print numbers from 1 to n.(looops without arrays/strings)
#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        printf("%d%s", i, (i == n) ? "" : " ");
    }
    printf("\n");

    return 0;
}