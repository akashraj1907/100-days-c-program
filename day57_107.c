//Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. 
// If there does not exist next greater of current element, then previous greater element for current element is -1.
//Previous greater element of an element in the array is the nearest element on the left which is greater than the current element.
//N.B:
//- Print the output for each element in a comma separated fashion.
//- Do not use Stack, use brute force approach (nested loop) to solve.
#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input size!\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Output: ");
    for (int i = 0; i < n; i++) {
        int prevGreater = -1;

        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;
            }
        }

        if (i == n - 1) {
            printf("%d", prevGreater);
        } else {
            printf("%d, ", prevGreater);
        }
    }

    printf("\n");
    return 0;
}