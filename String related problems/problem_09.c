#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[2];

    // Get the string and character from user
    printf("Enter the string: ");
    gets(str1);

    printf("Enter the character: ");
    gets(str2);

    // Convert them into lowercase
    strlwr(str1);
    strlwr(str2);

    int i = 0, count = 0;

    // Run a while loop for the string
    while(str1[i] != '\0') {
        // If the string value and character is same increase the count
        if (str1[i] == str2[0]) {
            count++;
        }
        i++;
    }

    printf("%d", count);

    return 0;
}
