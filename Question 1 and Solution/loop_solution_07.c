#include <stdio.h>

int main() {
    // Declare variables to store input character and count the number of inputs
    char input;
    int countInputs = 0;

    // Continuously prompt the user for input until 'A' is entered
    while (1) {
        printf("Enter any inputs from your keyboard: ");
        scanf(" %c", &input);

        // Check if the input is 'A' to break the loop
        if (input == 'A') {
            break;
        }

        // Print the input and increment the counter
        printf("Input %d: %c\n", countInputs, input);
        countInputs++;
    }

    return 0;
}