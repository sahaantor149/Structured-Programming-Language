#include <stdio.h>

int main() {
    int n, m;

    printf("Enter the number of elements in Array A: ");
    scanf("%d", &n);

    int A[n];
    
    printf("Enter the elements of Array A:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the number of elements in Array B: ");
    scanf("%d", &m);

    int B[m];
    
    printf("Enter the elements of Array B:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    int difference[n];
    int size = 0;

    for (int i = 0; i < n; i++) {
        int isInB = 0;
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                isInB = 1;
                break;
            }
        }
        if (!isInB) {
            difference[size++] = A[i];
        }
    }

    printf("Difference (A - B): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", difference[i]);
    }
    printf("\n");

    return 0;
}
