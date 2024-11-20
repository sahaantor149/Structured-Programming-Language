#include <stdio.h>

int main() {
    int n, term, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        term = 0;
        for (int j = 1; j <= i; j++) {
            term = term * 10 + j;
        }
        sum += term;
    }

    printf("The sum of the series up to %d terms is %d\n", n, sum);

    return 0;
}