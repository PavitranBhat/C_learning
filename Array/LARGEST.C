#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    int arr[n];  // declare array after reading n
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {  // indexing should start from 0
        scanf("%d", &arr[i]);
    }

    int max = arr[0];  // initialize max to first element

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum element in array: %d\n", max);
    return 0;
}
