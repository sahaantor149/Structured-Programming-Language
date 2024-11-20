#include <stdio.h>

int main() {
    int i, x, y, result = 1;

    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);

    if (x < 0 || y < 0) {
        printf("Please enter a positive number.\n");
    }

    if (y == 0){
        printf("1\n");
        return 0;
    }

    for (i = 1; i <= y-1; i++) {
        x = x * x;
    }

    printf("%d\n", x);

    return 0;
}