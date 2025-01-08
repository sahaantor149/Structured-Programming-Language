#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the size of array: ");
    scanf("%d %d", &m, &n);

    int array[m][n];

    printf("Enter the values of the array:\n");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n / 2; j++) {
            // Swap columns
            int temp = array[i][j];
            array[i][j] = array[i][n - 1 - j];
            array[i][n - 1 - j] = temp;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
