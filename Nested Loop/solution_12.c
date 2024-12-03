#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n-1; i++) {
        for (int j = 1; j <= n - (i + 1); j++) {
            printf("_");
        }

        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        
        printf("\n");
    }

    for (int i = n - 2; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - (i + 1); j++) {
            printf("_");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}