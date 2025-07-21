//factorial of numbers using recursion function

#include<stdio.h>

// Correct return type to int
int factorial(int n)
{
    if(n==0 || n==1){
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n;
    printf("Enter the number to find factorial:\n");  // Removed %d
    scanf("%d", &n);

    int result = factorial(n);  // Store the result
    printf("Factorial of %d is: %d\n", n, result);  // Print the result

    return 0;
}
