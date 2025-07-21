// sum of digits using recursion function
#include<stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int sumDigits(int x) 
    {
        if (x == 0) return 0;
        return (x % 10) + sumDigits(x / 10);
    }

    printf("Sum of digits: %d\n", sumDigits(n));
    return 0;
}
/*sumDigits(456)
= (456 % 10) + sumDigits(456 / 10)
= 6 + sumDigits(45)

sumDigits(45)
= 5 + sumDigits(4)

sumDigits(4)
= 4 + sumDigits(0)

sumDigits(0)
= 0   ← base case
*/
