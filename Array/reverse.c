#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array is:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
