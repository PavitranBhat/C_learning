//You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, 
//starting with word1. If a string is longer than the other, 
//append the additional letters onto the end of the merged string.Return the merged string.

//Example 1:
//Input: word1 = "abc", word2 = "pqr"
//Output: "apbqcr"
//Explanation: The merged string will be merged as so:
//word1:  a   b   c
//word2:    p   q   r
//merged: a p b q c r
#include <stdio.h>
#include <string.h>

int main() {
    char word1[101], word2[101], merged[201];
    int i = 0, j = 0, k = 0;

    scanf("%100s", word1);
    scanf("%100s", word2);

    while (word1[i] != '\0' && word2[j] != '\0') {
        merged[k++] = word1[i++];
        merged[k++] = word2[j++];
    }

    while (word1[i] != '\0') {
        merged[k++] = word1[i++];
    }

    while (word2[j] != '\0') {
        merged[k++] = word2[j++];
    }

    merged[k] = '\0';

    printf("%s", merged);
    return 0;
}
