#include <stdio.h>

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = &arr[0];

    // Address store inside
    // name
    printf("%p\n", arr);

    // Print the address which
    // is pointed by pointer ptr
    printf("%p\n", ptr);
    return 0;
}