//Imagine a determined young athlete named Alex who is training for a big competition. As part of his training, he must climb a set of n stairs to reach the top of a training tower. 
//Each time he practises,he can either take a single step (climb 1 stair) or take a bigger leap (climb 2 stairs). 
//Alex is curious about how many different ways he can reach the top of the stairs based on his climbing patterns. 
//Alex decides to record his attempts to find out how many unique sequences of steps he takes to reach the top. 

#include <stdio.h>
int countWays(int n) {
    if (n == 0) return 1;
    if (n < 0) return 0; 
    return countWays(n - 1) + countWays(n - 2);
}

int main() {
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d", &n);
    countWays(n); // calling function
    printf("Output: %d\n", countWays(n));
    return 0;
}
