#include <stdio.h>

int number_of_words (char str[]);
int nth_word_length (char str[], int n);
int is_prime (int number);
int is_spell (char str[]);

int main () {
    char str[100];

    printf("Enter string: ");
    scanf("%[^\n]", str);
    getchar();

    if (is_spell(str) == 1) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}

int number_of_words (char str[]) {
    int count = 0, inWord = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            count++;
        }
    }

    return count;
}

int nth_word_length (char str[], int n) {
    int inWord = 0, length = 0, wordIndex = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            inWord = 0;
            if (wordIndex + 1 == n) {
                return length;
            }
            length = 0;
            wordIndex++;
        } else {
            inWord = 1;
            length++;
        }
    }
    if (inWord && wordIndex + 1 == n) {
        return length;
    }
}

int is_prime (int number) {
    if (number % 2 == 0){
        return 0;
    } else {
        return 1;
    }
}

int is_spell (char str[]) {
    int numberOfWords = number_of_words(str);
    int number = 0;

    for (int i = 1; i <= numberOfWords; i++) {
        int wordLength = nth_word_length(str, i);
        if (wordLength > 9) {
            return 0;
        }
        number = number * 10 + wordLength;
    }

    return is_prime(number);
}
