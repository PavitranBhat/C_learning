// write a program that takes a sorted array arr[] of size N from the user and removes the duplicate elements from the array.
#include<stdio.h>
int main(){
    int n;
    printf("enter the array size:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int result[n];
    int j = 0;

    // Always include the first element
    result[j++] = arr[0];

    // Traverse and copy only unique elements
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            result[j++] = arr[i];
        }
    }

    // Print the updated array
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < j; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}