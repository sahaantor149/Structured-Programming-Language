#include <stdio.h>

int main() {
    int n, searchValue;
    int found = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the number: ");
    scanf("%d", &searchValue);

    for (int i = 0; i < n; i++) {
        if (array[i] == searchValue) {
            if (!found) {
                printf("FOUND at index position: ");
            }
            if (found) {
                printf(", ");
            }
            printf("%d", i);
            found = 1;
        }
    }

    if (!found) {
        printf("NOT FOUND");
    }

    printf("\n");
    return 0;
}