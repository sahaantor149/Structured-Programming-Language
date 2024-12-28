#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    int arr[n], new_arr[n];

    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < count; j++) {
            if (arr[i] == new_arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            new_arr[count] = arr[i];
            count++;
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", new_arr[i]);
    }

    return 0;
}