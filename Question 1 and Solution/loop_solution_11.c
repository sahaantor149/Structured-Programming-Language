#include <stdio.h>

int main() {
    int i, num, sum = 0;

    // Prompt the user to enter a number
    printf("Enter the number for sum: ");
    scanf("%d", &num);

    // Calculate the sum using the given formula
    for (i = 1; i <= num; i++) {
        sum += i * i * (i + 1);
    }

    // Print the calculated sum
    printf("Result: %d\n", sum);

    return 0;
}