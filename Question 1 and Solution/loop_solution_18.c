#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number for later comparison
    original = num;

    // Reverse the digits of the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check if the original number and the reversed number are equal
    if (original == reversed) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
