//Q108: Write a Program to take an integer array nums.  
//Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
//The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>

void productExceptSelf(int* nums, int numsSize, int* answer) {
    answer[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    int suffixProduct = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        answer[i] *= suffixProduct;
        suffixProduct *= nums[i];
    }
}

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    int answer[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    productExceptSelf(nums, n, answer);

    printf("Output: [");
    for (int i = 0; i < n; i++) {
        printf("%d%s", answer[i], (i == n - 1) ? "" : ", ");
    }
    printf("]\n");

    return 0;
}