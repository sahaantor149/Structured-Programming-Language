#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);

    if (x == 1) {
        printf("One");
    } else if (x == 2) {
        printf("Two");
        printf(" - Second");
    } else if (x == 3) {
        printf("Three");
    } else {
        printf("Other");
    }

    return 0;
}