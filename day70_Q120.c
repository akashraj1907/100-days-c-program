//Q120: Write a program to take two sorted arrays of size m and n as input. 
//Merge both the arrays such that the merged array is also sorted.
//Print the merged array.
#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the size of nums1 and nums2: ");
    if (scanf("%d %d", &m, &n) != 2) return 0;
    
    int nums1[m], nums2[n];
 
    printf("Enter %d sorted elements for nums1: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter %d sorted elements for nums2: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }
    
    int merged[m + n];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

    while (i < m) {
        merged[k++] = nums1[i++];
    }

    while (j < n) {
        merged[k++] = nums2[j++];
    }

    printf("Merged Array: ");
    for (int idx = 0; idx < m + n; idx++) {
        printf("%d", merged[idx]);
        if (idx < m + n - 1) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}