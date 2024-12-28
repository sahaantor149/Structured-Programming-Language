#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    int array1[n], array2[n], array3[n];

    for (int i = 0; i <= n - 1; i++) {
        scanf("%d", &array1[i]);
    }

    for (int i = 0; i <= n - 1; i++) {
        scanf("%d", &array2[i]);
    }

    for (int i = 0; i <= n - 1; i++) {
        array3[i] = array1[i] + array2[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", array3[i]);
    }

    return 0;
}