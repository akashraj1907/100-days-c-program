//Q57: Find the sum of array elements.
#include <stdio.h>

int main() {
    int n, sum = 0;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%d\n", sum);

    return 0;
}