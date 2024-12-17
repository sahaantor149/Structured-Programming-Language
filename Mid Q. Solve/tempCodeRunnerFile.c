#include <stdio.h>

int main() {
    int n, term, sum = 0;

    // Input: Number of terms in the series
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("Series: ");

    // Loop to generate and print the series
    for (int i = 1; i <= n; i++) {
        term = 4 * i * i - 7 * i + 3; // Formula: 4n^2 - 7n + 3
        printf("%d", term);
        
        if (i < n) {
            printf(", ");
        }
        
        sum += term; // Add the current term to the sum
    }

    printf("\nSum of the series: %d\n", sum); // Print the sum of the series

    return 0;
}