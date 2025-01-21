#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter the string: ");
    gets(str);

    strlwr(str);

    int i = 0, wordCount = 0, inWord = 0;

    while (str[i] != '\0') {
        // Check if the current character is a space
        if (str[i] == ' ') {
            // If yes, set `inWord` to 0, indicating the end of a word
            inWord = 0;
        } else if (inWord == 0) { // If the character is not a space
            // If not already in a word, mark the start of a new word
            inWord = 1;
            // Increment the word count
            wordCount++;
        }
        i++;
    }


    printf("%d", wordCount);

    return 0;
}
