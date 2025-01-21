#include <stdio.h>

int main() {
    char str[100];

    printf("Enter the string: ");
    gets(str);

    int i = 0;

    // Run a while loop for the string
    while (str[i] != '\0') {
        // If the string value is small letter make it capital subtract by 32
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        } else if (str[i] >= 'A' && str[i] <= 'Z') { // If the string value is capital letter make it smaller by adding 32
            str[i] = str[i] + 32;
        }
        i++;
    }

    printf("%s", str);

    return 0;
}
