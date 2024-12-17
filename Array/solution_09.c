#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    char arr[n];

    for (int i = 0; i <= n - 1; i++) {
        scanf("%c", &arr[i]);
    }

    for (int i = 0; i <= n - 1; i++) {
        if (arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U'){
            count++;
        }
    }

    printf("Count: %d", count);

    return 0;
}