#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("array size must be an odd number.\n");
        return 0;
    }

    int array[n][n];

    printf("Enter the values of the array:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    for (int j = 0; j < n; j++) {
        sum += array[0][j];
    }

    for (int j = 0; j < n; j++) {
        sum += array[n - 1][j];
    }

    for (int i = 1; i < n - 1; i++) {
        sum += array[i][i];
    }

    for (int i = 1; i < n - 1; i++) {
        sum += array[i][n - 1 - i];
    }

    printf("Sum: %d\n", sum);

    return 0;
}