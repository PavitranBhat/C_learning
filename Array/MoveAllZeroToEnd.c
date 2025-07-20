// Given an array of integers arr[], the task is to move all the zeros to the end of the array
// while maintaining the relative order of all non-zero elements.

// Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0]
// Output: arr[] = [1, 2, 4, 3, 5, 0, 0, 0]
//  Explanation: There are three 0s that are moved to the end

#include <stdio.h>
#include <stdio.h>

int main() {
    int n; // array size
    printf("Enter the size of array:\n");
    scanf("%d", &n);

    int arr[n]; // array declaration after reading size
    int j = 0;   // pointer for non-zero element placement

    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Move non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }

    // Fill the rest with zeros
    while (j < n) {
        arr[j++] = 0;
    }

    printf("Array after moving zeroes to the end:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
