#include <stdio.h>

int main() {
    char input;
    int countInputs = 0;
    
    while (1) {
        printf("Enter any inputs from your keyboard: ");
        scanf(" %c", &input);

        if (input == 'A'){
            break;
        }
        printf("Input %d: %c\n", countInputs, input);

        countInputs++;
    }

    return 0;
}