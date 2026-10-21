//Q122: Write a program to take an integer array as input. 
//Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
//print the repeated element.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1) return 0;

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int *freq = (int *)calloc(max + 1, sizeof(int));
    int repeated = -1;

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1) {
            repeated = arr[i];
            break;
        }
        freq[arr[i]]++;
    }

    printf("The repeated element is: %d\n", repeated);

    free(arr);
    free(freq);

    return 0;
}