#include <stdio.h>

int main() {
    int number, i, isPrime = 1;

    // Prompt the user to enter a number
    printf("Enter the number: ");
    scanf("%d", &number);

    // Handle the special case of 1
    if (number <= 1) {
        isPrime = 0;
    } else {
        // Check divisibility from 2 to the square root of the number
        for (i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Print the result
    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 1  0;
}