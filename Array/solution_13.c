#include <stdio.h>

int main() {
    int n, position;

    printf("Enter the number: ");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position: ");
    scanf("%d", &position);

    for (int i = position; i < n - 1; i++) {
        array[i] = array[i + 1];
    }

    n--;
    
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}