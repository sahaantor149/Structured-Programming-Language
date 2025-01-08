#include <stdio.h>

int main() {
    char choice;

    scanf(" %c", &choice);

    if (choice == 'a') {
        printf("Apple");
    } else if (choice == 'b') {
        printf("Banana");
    } else if (choice == 'c') {
        printf("Cherry - Sweet Fruit");
    } else {
        printf("None");
    }

    return 0;
}