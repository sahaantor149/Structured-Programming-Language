#include <stdio.h>

int main() {
    int i, lastNumber;
    // Declare two integer variables: i for loop counter and lastNumber for user input

    // Prompt the user to enter the last number of the series
    printf("Enter the last number of series: ");
    // Read the input number from the user and store it in lastNumber
    scanf("%d", &lastNumber);

    // Loop from 1 to the value of lastNumber
    for (i = 1; i <= lastNumber; i++) {
        // Print the current value of i, followed by a space
        printf("%d ", i);
    }

    // Print a newline character at the end of the series for better formatting
    printf("\n");

    return 0;
}
