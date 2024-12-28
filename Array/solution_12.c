#include <stdio.h>

int main() {
    int n, new_numner, position;

    printf("Enter the number: ");
    scanf("%d", &n);

    int array[n+1];

    for (int i=0; i<n; i++){
        scanf("%d", &array[i]);
    }

    printf("Enter new number: ");
    scanf("%d", &new_numner);

    printf("New number position: ");
    scanf("%d", &position);

    for (int i = n; i > position; i--) {
        array[i] = array[i - 1];
    }

    array[position] = new_numner;

    for (int i = 0; i <= n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}