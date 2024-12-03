#include <stdio.h>

int main() {
    int n;
    printf("Enter an odd integer: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd integer.\n");
        return 0;
    }

    int mid = n / 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == mid) {
                printf("H ");
            } else {
                if (j == 0 || j == n - 1) {
                    printf("H ");
                } else {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    
    return 0;
}