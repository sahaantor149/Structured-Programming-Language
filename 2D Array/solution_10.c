#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Matrix size must be an odd number.\n");
        return 0;
    }

    int array[n][n];

    printf("Enter the values of array:\n");

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        sum += array[n/2][i];
    }

    for (int i = 0; i < n/2; i++) {
        sum += array[i][n-1];
    }

    for (int i = (n/2 + 1); i < n; i++) {
        sum += array[i][0];
    }

    for (int i = 0; i < n/2 + 1; i++) {
        sum += array[0][i];
    }

    for (int i = n/2; i < n ; i++) {
        sum += array[n-1][i];
    }

    for (int i = 1; i < n - 1 ; i++) {
        if (i != n/2) {
            sum += array[i][n/2];
        }
    }

    printf("%d \n", sum);

    return 0;

}