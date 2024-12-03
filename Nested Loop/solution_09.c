#include <stdio.h>

int main() {
    int n, temp = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++){
            temp++;
            if (temp % 2 == 0) {
                printf("0");
            } else {
                printf("1");
            }
        }

        printf("\n");
    }

    return 0;
}