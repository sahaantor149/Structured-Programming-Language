#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i <= n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= n - 1; i++) {
        if (i%2 == 0)
            sum += arr[i];
    }

    printf("%d", sum);

    return 0;
}