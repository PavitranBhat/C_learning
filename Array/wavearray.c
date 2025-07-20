// Given an sorted array arr[] of integers, rearrange the elements into a wave-like array.
// An array arr[0..n-1] is said to be in wave form if it follows the pattern:
// arr[0]≥arr[1]≤arr[2]≥arr[3]≤arr[4]≥… and so on and find the lexicographically smallest one.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the array size:\n");
    scanf("%d", &n);

    int arr[n];  // Declare after reading size

    printf("Enter the sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Swap adjacent elements for wave form
    for (int i = 0; i < n - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    printf("Wave array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Added space between numbers
    }

    return 0;
}
