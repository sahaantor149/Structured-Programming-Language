#include <stdio.h>

int main() {
    int i, x, y, result = 1;

    // Prompt the user to enter values for x and y
    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);

    // Check if x or y is negative
    if (x < 0 || y < 0) {
        printf("Please enter positive numbers.\n");
        return 1; // Exit the program with an error code
    }

    // Handle the special case where y is 0
    if (y == 0) {
        printf("1\n");
        return 0; // Exit the program successfully
    }

    // Calculate x^y using a loop
    for (i = 1; i <= y; i++) {
        result *= x;
    }

    // Print the result
    printf("%d\n", result);

    return 0;
}