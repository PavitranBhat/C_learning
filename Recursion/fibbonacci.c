// fibbonacci series using recursion 
#include <stdio.h>

// Recursive function to return the nth Fibonacci number
int fibbo(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibbo(n - 1) + fibbo(n - 2);  // Recursive calls
}

int main() {
    int n;
    printf("Enter how many terms of Fibonacci you want: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibbo(i));
    }
    printf("\n");

    return 0;
}
