#include<stdio.h>
int main(){
    int arr[2][2]={1,2,3,4};
    
    printf("2D Array: ");
    // printing 2d array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]);
        }
    }

}