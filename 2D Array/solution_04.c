#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int array[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("Major diagonal: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i][i]);
    }

    printf("\n");
    
    printf("Minor diagonal: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i][n - 1 - i]);
    }

    return 0;
}