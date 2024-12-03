#include <stdio.h>

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n%2 == 0) {
        printf("Enter a odd number\n");
        return 0;
    }

    int middle = (n / 2);

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= middle) {
                if (j == i || j == (n - i - 1))
                    printf("*");
                else
                    printf("_");
            } else {
                if (j == (n - i - 1) || j == i)
                    printf("*");
                else
                    printf("_");
            }
        }
        printf("\n");
    }

    return 0;
}
