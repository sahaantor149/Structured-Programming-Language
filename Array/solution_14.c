#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;

    printf("Enter the number of elements in Array A: ");
    scanf("%d", &n);

    int *A = (int *)malloc(n * sizeof(int));

    printf("Enter the elements of Array A:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the number of elements in Array B: ");
    scanf("%d", &m);

    int *B = (int *)malloc(m * sizeof(int));

    printf("Enter the elements of Array B:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    int *temp = A;
    A = B;
    B = temp;

    int tempSize = n;
    n = m;
    m = tempSize;

    printf("Array A: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Array B: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
