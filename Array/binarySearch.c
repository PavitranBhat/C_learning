// write a program that takes an array arr[] of size N and a target value to be searched by the user.
// Search the target value using binary search if the target value is found print its index else print 'element is not present in array'.
#include <stdio.h>
int main()
{
    int n, key;
    int arr[n];
    int found = 0;
    int mid, start = 0, end;

    printf("enter the size of array\n");
    scanf("%d", &n);

    printf("enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the key to be searched:\n");
    scanf("%d", &key);

     while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == key) {
            found = 1;
            printf("Element found at index %d\n", mid);
            break;
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    if (!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
