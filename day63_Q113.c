//Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include <stdio.h>
#include <stdlib.h>

void printMaxWindow(int arr[], int n, int k) {
    if (k <= 0 || k > n) return;

    int *deque = (int *)malloc(n * sizeof(int));
    int front = 0, rear = -1;

    for (int i = 0; i < n; i++) {
  
        if (front <= rear && deque[front] <= i - k) {
            front++;
        }

        while (front <= rear && arr[deque[rear]] <= arr[i]) {
            rear--;
        }

        deque[++rear] = i;

        if (i >= k - 1) {
            printf("%d", arr[deque[front]]);
            if (i < n - 1) {
                printf(" ");
            }
        }
    }
    printf("\n");

    free(deque);
}

int main() {
    int n, k;

    printf("Enter the size of the array (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements separated by space: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the window size (k): ");
    scanf("%d", &k);

    printf("Output: ");
    printMaxWindow(arr, n, k);

    free(arr);

    return 0;
}