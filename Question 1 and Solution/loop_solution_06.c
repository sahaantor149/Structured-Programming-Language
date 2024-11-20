#include <stdio.h>

int main() {
    int firstNumber, option, guess, totalTry = 0;

    printf("Hello Player-1!\nPlease guess a number: ");
    scanf("%d", &firstNumber);

    printf("Hello Player-2!\nHow many times would you like to try: ");
    scanf("%d", &option);

    while (totalTry < option) {
        printf("Guess the number: ");
        scanf("%d", &guess);
        if (firstNumber == guess) {
            break;
        }
        printf("Wrong, %d Choice(s) Left!\n", option - totalTry - 1);
        totalTry++;
    }

    if (totalTry == option) {
        printf("Player-1 wins!\n");
    } else {
        printf("Right, Player-2 wins!\n");
    }

    return 0;
}