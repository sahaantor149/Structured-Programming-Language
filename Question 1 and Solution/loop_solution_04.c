#include <stdio.h>

int main() {
    int i, totalNumber; 
    // Declare two integer variables: i for loop counter and totalNumber to store the user input

    float number, sum = 0, average; 
    // Declare a float variable number for storing each input, sum initialized to 0 to accumulate the sum, and average for calculating the mean

    // Prompt the user to enter the total number of inputs
    printf("Enter the number of inputs: ");

    // Read the input number from the user and store it in totalNumber
    scanf("%d", &totalNumber);

    // Loop to get the totalNumber of inputs
    for (i = 1; i <= totalNumber; i++) {
        // Prompt the user to enter the current number
        printf("Enter number %d: ", i);

        // Read the input number as a float and store it in the variable number
        scanf("%f", &number);

        // Add the entered number to the sum
        sum += number;
    }

    // Calculate the average by dividing the sum by the total number of inputs
    average = sum / totalNumber;

    // Print the calculated average, formatted to 6 decimal places
    printf("AVG of %d inputs: %.6f\n", totalNumber, average);

    return 0;
}
