#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        for (int k = 1; k <= n - i; k++) {
            printf("_");
        }

        for (int l = n - i - 1; l > 0; l--) {
            printf("_");
        }

        for (int m = i; m > 0; m--){
            if (m != n)
                printf("%d", m);
        }
        
        printf("\n");
    }

    return 0;
}