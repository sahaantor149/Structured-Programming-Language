#include <stdio.h>

int main() {
    char str[100];

    // Get the string value
    printf("Enter your string: ");
    // Store the given value
    gets(str);

    int i = 0, length = 0;

    // Run a while loop until reach the blank value("\0")
    while (str[i] != '\0') {
        i++;

        // Increase the length value
        length++;
    }

    // Print the length
    printf("%d", length);

    return 0;
}
