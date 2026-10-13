//Q114: Write a program to take an integer array arr and an integer k as inputs. 
//The task is to find the first negative integer in each subarray of size k moving from left to right.
//If no negative exists in a window, print "0" for that window.
//Print the results separated by spaces as output.
#include <stdio.h>
void printFirstNegativeInteger(int arr[], int n, int k) {

    int queue[n];
    int front = 0, rear = 0;

    int i;
    for (i = 0; i < k; i++) {
        if (arr[i] < 0) {
            queue[rear++] = i;
        }
    }

    for (; i < n; i++) {
        if (front < rear) {
            printf("%d ", arr[queue[front]]);
        } else {
            printf("0 ");
        }

        while (front < rear && queue[front] <= i - k) {
            front++;
        }

        if (arr[i] < 0) {
            queue[rear++] = i;
        }
    }

    if (front < rear) {
        printf("%d", arr[queue[front]]);
    } else {
        printf("0");
    }
    printf("\n");
}

int main() {
    int n, k;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements separated by space: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the window size (k): ");
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        printf("Invalid window size k.\n");
        return 1;
    }

    printf("Output: ");
    printFirstNegativeInteger(arr, n, k);

    return 0;
}