#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Get the string from user
    printf("Enter the string: ");
    gets(str1);

    // Convert the string into lowercase
    strlwr(str1);

    // Copy the string 1 into string 2
    strcpy(str2, str1);

    if (strcmp(str1, str2) == 0) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}

