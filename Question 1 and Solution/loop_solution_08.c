#include <stdio.h>

int main() {
    // Declare variables to store the original number and its reverse
    int number, rev_num = 0;

    // Prompt the user to enter a number
    printf("Enter the number: ");
    scanf("%d", &number);

    // Reverse the number digit by digit
    while (number > 0) {
        // Extract the last digit of the number
        int last_digit = number % 10;

        // Append the last digit to the reverse number
        rev_num = rev_num * 10 + last_digit;

        // Remove the last digit from the original number
        number = number / 10;
    }

    // Print the reversed number
    printf("%d\n", rev_num);

    return 0;
}