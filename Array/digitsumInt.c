// given an array and we need to add the integer elements until we get single digit
#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer:\n");
    scanf("%d", &n);

    // Repeat until n becomes a single digit
    while (n >= 10) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }

    printf("The single-digit result is: %d\n", n);
    return 0;
}
