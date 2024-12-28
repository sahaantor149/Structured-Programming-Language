#include <stdio.h>

int main() {
    int n1, n2, count = 0;

    printf("Enter the first array size: ");
    scanf("%d", &n1);

    int arr1[n1];

    for (int i=0; i<n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the second array size: ");
    scanf("%d", &n2);

    int arr2[n2];

    for (int i=0; i<n2; i++) {
        scanf("%d", &arr2[i]);
    }

    for (int i=0; i<n1; i++){
        for (int j=0; j<n2; j++){
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                count = 1;
            }
        }
    }

    if (count == 0){
        printf("Empty set.");
    }

    return 0;
}