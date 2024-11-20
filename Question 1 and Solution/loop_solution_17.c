#include <stdio.h>

int main() {
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    if (number%2 == 0) {
        printf("Not Prime\n");
    } else {
        printf("Prime\n");
    }

    return 0;
}