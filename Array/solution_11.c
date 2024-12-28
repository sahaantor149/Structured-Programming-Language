#include <stdio.h>

int main() {
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    int array[n], rev_array[n];

    for (int i = 0; i<=n-1; i++){
        scanf("%d", &array[i]);
    }

    for (int i = n-1; i>=0; i--){
        rev_array[n-i-1] = array[i];
    }

    printf("Array A: ");
    for (int i=0; i<=n-1; i++){
        printf("%d ", array[i]);
    }

    printf("\nArray B: ");
    for (int i=0; i<=n-1; i++){
        printf("%d ", rev_array[i]);
    }

    return 0;
}