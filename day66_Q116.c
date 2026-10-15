//Q116: Write a program to take an integer array arr and an integer k as inputs.
//The task is to find the kth smallest element in the array.
//Print the kth smallest element as output.
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n, k;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1) return 0;

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    qsort(arr, n, sizeof(int), compare);

    if (k > 0 && k <= n) {
        printf("The %d-th smallest element is: %d\n", k, arr[k - 1]);
    } else {
        printf("Invalid value of k!\n");
    }

    free(arr);

    return 0;
}