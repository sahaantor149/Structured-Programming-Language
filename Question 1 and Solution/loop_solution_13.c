#include <stdio.h>

int main() {
    int i, num, result = 1;

    // Prompt the user to enter a number
    printf("Enter the number for factorial: ");
    scanf("%d", &num);

    // Print the factorial calculation process
    printf("%d! = ", num);
    for (i = 1; i <= num; i++) {
        result *= i;
        printf("%d ", i);
        if (i < num) {
            printf("x ");
        }
    }

    // Print the final result
    printf("= %d\n", result);

    return 0;
}