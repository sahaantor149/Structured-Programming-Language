#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n%2 == 0) {
        printf("Enter a odd number\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        if (i%2 == 0) {
            printf("*");
            for (int k = 1; k <= n - 2; k++) {
                printf("_");
            }
            printf("*");
        } else {
            for (int j = 1; j <= n; j++) {
                printf("*");
            }
        }
        
        printf("\n");
    }

    return 0;
}