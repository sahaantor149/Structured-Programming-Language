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
        if (i == 1 || i == n) {
            for (int j = 1; j <= n; j++) {
                printf("z");
            }
        } else {
            for (int k = 1; k <= n - i; k++) {
                printf(" ");
            }
            printf("z");
        }
        
        printf("\n");
    }

    return 0;
}