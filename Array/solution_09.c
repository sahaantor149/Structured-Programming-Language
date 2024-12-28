#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    char array[n];

    for (int i = 0; i <= n - 1; i++) {
        scanf(" %c", &array[i]);
    }

    for (int i = 0; i <= n - 1; i++) {
        if (array[i] == 'A' || array[i] == 'E' || array[i] == 'I' || array[i] == 'O' || array[i] == 'U'){
            count++;
        }
    }

    printf("Count: %d", count);

    return 0;
}