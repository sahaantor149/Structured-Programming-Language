#include <stdio.h>

int main() {
    int x, y; 
    // Declare two integer variables: x and y for user input

    // Prompt the user to enter values for x and y
    printf("Enter the value of x and y: ");

    // Read the values of x and y from the user
    scanf("%d%d", &x, &y);

    // Continue looping as long as x is not equal to y
    while (x != y) {
        // Print the square of the current value of x
        printf("%d, ", x * x);

        if (x < y) { 
            // If x is less than y, increment x
            x++;
        } else { 
            // If x is greater than y, decrement x
            x--;
        }
    }

    // Print "Reached!" when x equals y
    printf("Reached! \n");

    return 0;
}
