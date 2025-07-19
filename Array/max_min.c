//write a program to find the maximum and the minimum element of the array of size N given by the user.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // corrected here
    }

    int min = arr[0], max = arr[0];

    // Find min and max
    for (int i = 0; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    // Output results
    printf("Minimum element is: %d\n", min);
    printf("Maximum element is: %d\n", max);

    return 0;
}
