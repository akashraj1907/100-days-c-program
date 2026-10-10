//Q108: Write a Program to take an integer array nums. 
//Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input size!\n");
        return 1;
    }

    int* nums = (int*)malloc(n * sizeof(int));
    int* answer = (int*)malloc(n * sizeof(int));

    if (nums == NULL || answer == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements separated by spaces: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    answer[0] = 1;
    for (int i = 1; i < n; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    int rightProduct = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * rightProduct;
        rightProduct *= nums[i];
    }

    printf("Output: [");
    for (int i = 0; i < n; i++) {
        printf("%d%s", answer[i], (i == n - 1) ? "" : ",");
    }
    printf("]\n");

    free(nums);
    free(answer);

    return 0;
}