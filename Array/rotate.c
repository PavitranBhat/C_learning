//In this problem, you have to write a program that takes an array arr[] of size N from the user and rotates the array to the left (counter-clockwise direction) by D steps, where D is a positive integer.
#include<stdio.h>
int main()
{
    int N=5;
    int arr[5] = { 10,30,50,60,80};
    int D;
    printf("Enter the number of roataion:\n");
    scanf("%d",&D);
    D = D % N;

    printf("Array after %d left rotations:\n", D);

    // Print left rotated array
    for (int i = D; i < N; i++) {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < D; i++) {
        printf("%d ", arr[i]);
    }
    // right rotation array
    //for (i = n - d; i < n; i++)  // last d elements
   // print arr[i];
   //for (i = 0; i < n - d; i++)  // remaining elements
   // print arr[i];


    return 0;
} 