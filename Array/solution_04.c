#include <stdio.h>

int main() {
    int n;
    float sum = 0.00, avg;

    printf("Enter the number: ");
    scanf("%d", &n);

    float array[n];

    for (int i = 0; i <= n - 1; i++) {
        scanf("%f", &array[i]);
    }

    for (int i = 0; i <= n - 1; i++) {
        sum += array[i];
    }

    printf("Average = %.2f", (sum / n));

    return 0;
}