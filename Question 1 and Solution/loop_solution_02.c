#include <stdio.h>

int main() {
    int i, totalNumber; 
    // Declare two integer variables: i for the loop counter and totalNumber to store user input

    // Prompt the user to enter the total number of terms in the series
    printf("Enter the number for series: "); 
    // Read the input number from the user and store it in totalNumber
    scanf("%d", &totalNumber); 

    // Loop from 1 to the value of totalNumber
    for (i = 1; i <= totalNumber; i++) {
        printf("%d ", 2 * i - 1); 
        // Print the current odd number in the series, calculated as 2 * i - 1
    }

    // Print a newline character at the end of the series for proper formatting
    printf("\n"); 

    return 0; 
}
