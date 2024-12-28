#include <stdio.h>

int main() {
    int y;

    scanf("%d", &y);

    switch(y) {
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            printf(" - Third month");
            break;
        default:
            printf("Other");
    }

    return 0;
}