#include <stdio.h>

int main() {
    int m, n, maxNumber, location;

    printf("Enter the value of m and n: ");
    scanf("%d%d", &m, &n);

    int array[m][n];

    printf("Enter the matrix values:\n");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    int maxValue = array[0][0];
    int maxRow = 0, maxCol = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (array[i][j] > maxValue) {
                maxValue = array[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    printf("Max: %d\n", maxValue);
    printf("Location: [%d][%d]\n", maxRow, maxCol);

    return 0;
}