#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the value of m and n: ");
    scanf("%d %d", &m, &n);

    int array[m][n];
    int sum = 0;

    printf("Enter the values of the array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
            sum += array[i][j];
        }
    }

    printf("%d\n", sum);

    return 0;
}
