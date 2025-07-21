//A librarian has a collection of n books stacked in a special way.
// To find a particular book, you must first look at the book on the top, then recursively search the rest of the stack. 
//If you find the book, you need to count how many books you had to look at before finding it. 
//Task: Write a recursive function that takes the number of books n and the position of the target book and counts how many books were looked at.

#include <stdio.h>

int booklist(int n, int target) {
    if (n == target) {
        return 1;
    }
    return 1 + booklist(n - 1, target);
}

int main() {
    int n, target;
    printf("Enter the total number of books: ");
    scanf("%d", &n);

    printf("Enter the target book position: ");
    scanf("%d", &target);

    if (target > n || target <= 0) {
        printf("Invalid target position.\n");
        return 0;
    }

    int result = booklist(n, target);
    printf("Result is: %d\n", result);

    return 0;
}
