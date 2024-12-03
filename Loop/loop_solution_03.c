#include <stdio.h> 

int main() {
    int i, totalNumber; 
    // Declare two integer variables: i for the loop counter and totalNumber to store the user input

    // Prompt the user to enter the total number of terms in the series
    printf("Enter the number for series: ");

    // Read the input number from the user and store it in totalNumber
    scanf("%d", &totalNumber);

    // Loop from 1 to the value of totalNumber
    for (i = 1; i <= totalNumber; i++) { 
        if (i % 2 == 0) { 
            // If the current number i is even

            // Print 0 if i is even
            printf("0 "); 
        } else {
            // Print 1 if i is odd
            printf("1 ");
        }
    }

    // Print a newline character at the end of the series for proper formatting
    printf("\n");

    return 0;
}
