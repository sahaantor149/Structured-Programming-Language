#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int array[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            if (i == j){
                array[i][j] = 1;
            } else {
                array[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}