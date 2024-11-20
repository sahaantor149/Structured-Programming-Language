#include <stdio.h>

int main() {
    int i, number, sum = 0;

    // Prompt the user to enter a number
    printf("Enter the number for sum: ");
    scanf("%d", &number);

    // Iterate from 1 to the entered number
    for (i = 1; i <= number; i++) {
        // Check if the current number is even or odd
        if (i % 2 == 0) {
            // Subtract even numbers from the sum
            sum -= i;
        } else {
            // Add odd numbers to the sum
            sum += i;
        }
    }

    // Print the final sum
    printf("Result: %d\n", sum);

    return 0;
}