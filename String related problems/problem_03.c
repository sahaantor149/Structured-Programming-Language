#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Get the string from user
    printf("Enter the string: ");
    gets(str);

    // Covert into lowercase
    strlwr(str);

    int i = 0, vowel = 0;

    while(str[i] != '\0') {
        // Increase vowel if sting value is vowel
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowel++;
        }
        i++;
    }

    printf("%d", vowel);

    return 0;
}
