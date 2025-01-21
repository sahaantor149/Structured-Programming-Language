#include <stdio.h>

int main() {
    char str1[200], str2[100];

    // Get the first and second string from user
    printf("Enter the first string: ");
    // Store the first string
    gets(str1);

    printf("Enter the second string: ");
    // Store the second string
    gets(str2);

    int i = 0, length = 0, j = 0;

    // Run a while loop until reach to the blank for first srting
    while(str1[i] != '\0') {
        // Increase the i and length
        i++;
        length++;
    }

    // Run another while loop until reach to the blank for second string
    while(str2[j] != '\0') {
        // Store the second string after the first string
        str1[length + j] = str2[j];
        j++;
    }

    // Print the first string
    printf("%s", str1);

    return 0;
}
