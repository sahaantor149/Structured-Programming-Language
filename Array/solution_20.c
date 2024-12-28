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

    int unionArray[n + m];
    int size = 0;

    for (int i = 0; i < n; i++) {
        unionArray[size++] = A[i];
    }

    for (int i = 0; i < m; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < size; j++) {
            if (B[i] == unionArray[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unionArray[size++] = B[i];
        }
    }

    printf("Union of Array A and B: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", unionArray[i]);
    }
    printf("\n");

    return 0;
}
