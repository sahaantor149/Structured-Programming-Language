#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Get the string from user
    printf("Enter the string: ");
    gets(str);

    int i = 0, sum = 0;

    while (str[i] != '\0') {
        // Check if the character is a digit (0-9)
        if (str[i] >= '0' && str[i] <= '9') {
            // Convert the character to its integer value
            sum += str[i] - '0';
        }
        i++;
    }

    printf("%d", sum);

    return 0;
}

