#include <stdio.h>

int main() {
    char color;

    scanf("%c", &color);

    switch(color) {
        case 'r':
            printf("Red");
            break;
        case 'g':
            printf("Green");
            break;
        case 'b':
            printf("Blue");
            printf(" - Cool color");
            break;
        default:
            printf("Unknown");
    }

    return 0;
}