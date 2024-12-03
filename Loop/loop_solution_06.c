#include <stdio.h>

int main() {
    // Declare variables
    int firstNumber, option, guess, totalTry = 0;

    // Get the first number from Player-1
    printf("Hello Player-1!\nPlease guess a number: ");
    scanf("%d", &firstNumber);

    // Get the number of tries allowed from Player-2
    printf("Hello Player-2!\nHow many times would you like to try: ");
    scanf("%d", &option);

    // Loop until the number of tries is exhausted or the guess is correct
    while (totalTry < option) {
        // Get a guess from Player-2
        printf("Guess the number: ");
        scanf("%d", &guess);

        // Check if the guess is correct
        if (firstNumber == guess) {
            break; // Exit the loop if the guess is correct
        }

        // If the guess is incorrect, print a message and increment the try counter
        printf("Wrong, %d Choice(s) Left!\n", option - totalTry - 1);
        totalTry++;
    }

    // Determine the winner based on the final number of tries
    if (totalTry == option) {
        printf("Player-1 wins!\n");
    } else {
        printf("Right, Player-2 wins!\n");
    }

    return 0;
}