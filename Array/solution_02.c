#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i <= n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        sum += arr[i];
    }

    printf("%d", sum);

    return 0;
}