#include <stdio.h>

int main() {
    int i, number, firstNumber = 1, lastNumber = 1, nextNumber;

    // Prompt the user to enter the desired number of terms
    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &number);

    // Print the first two terms of the series
    printf("%d %d ", firstNumber, lastNumber);

    // Generate and print the remaining terms of the series
    for (i = 3; i <= number; i++) {
        // Calculate the next Fibonacci number
        nextNumber = firstNumber + lastNumber;

        // Print the next Fibonacci number
        printf("%d ", nextNumber);

        // Update the values of firstNumber and lastNumber for the next iteration
        firstNumber = lastNumber;
        lastNumber = nextNumber;
    }

    return 0;
}