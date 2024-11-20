#include <stdio.h>

int main() {
    int n, term, sum = 0;

    // Prompt the user to enter the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        // Calculate the current term
        term = 0;
        for (int j = 1; j <= i; j++) {
            term = term * 10 + j;
        }
        // Add the current term to the sum
        sum += term;
    }

    // Print the final sum
    printf("The sum of the series up to %d terms is %d\n", n, sum);

    return 0;
}