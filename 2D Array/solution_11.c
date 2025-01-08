#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of matrix: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Matrix size must be an odd number.\n");
        return 0;
    }

    int array[n][n];

    printf("Enter the values of the matrix:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i % 2 != 0) {
                sum += array[i][j];
            } else {
                if (j % 2 != 0) {
                    sum += array[i][j];
                }
            }
        }
    }

    // Output the result
    printf("%d\n", sum);

    return 0;
}
