#include <stdio.h>

int main() {
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int max = array[0], min = array[0];
    int maxIndex = 0, minIndex = 0;

    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
            maxIndex = i;
        }
        if (array[i] < min) {
            min = array[i];
            minIndex = i;
        }
    }

    printf("Max: %d, Index: %d\n", max, maxIndex);
    printf("Min: %d, Index: %d\n", min, minIndex);

    return 0;
}
