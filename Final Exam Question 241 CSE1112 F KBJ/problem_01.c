#include <stdio.h>

char middleWord[100];

int countWords (char *str);
void getMiddleWord (char str[]);
int isDragon (char str[]);

int main () {
    char str[100];

    printf("Enter string: ");
    scanf("%[^\n]", str);

    if (isDragon(str)) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}

int countWords (char *str) {
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

void getMiddleWord (char str[]) {
    int wordIndex = 1, j = 0;

    int totalWords = countWords(str);
    int middleWordIndex = (totalWords / 2) + 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            wordIndex++;
        }

        if (wordIndex == middleWordIndex && str[i] != ' ') {
            middleWord[j++] = str[i];
        } else if (wordIndex > middleWordIndex) {
            break;
        }
    }
    middleWord[j] = '\0';
}

int isDragon (char str[]) {
    int count = 0;

    getMiddleWord(str);

    for (int i = 0; middleWord[i] != '\0'; i++) {
        if (middleWord[i] != ' ') {
            count++;
        }
    }

    if (middleWord[0] == '?' && middleWord[count - 1] == '#') {
        return 1;
    }

    return 0;
}

//Antor Saha Rotno
