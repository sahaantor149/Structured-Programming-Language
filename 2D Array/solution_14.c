#include <stdio.h>

#define MAX 100

void inputMatrix(int matrix[MAX][MAX], int m, int n) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int isFirstOccurrence(int matrix[MAX][MAX], int m, int n, int row, int col) {
    int num = matrix[row][col];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == row && j == col) {
                return 1;
            }
            if (matrix[i][j] == num) {
                return 0;
            }
        }
    }
    return 1;
}

void replaceDuplicates(int matrix[MAX][MAX], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (!isFirstOccurrence(matrix, m, n, i, j)) {
                matrix[i][j] = -1;
            }
        }
    }
}

void displayMatrix(int matrix[MAX][MAX], int m, int n) {
    printf("Modified matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n;
    int matrix[MAX][MAX];

    printf("Enter number of values of m and n: ");
    scanf("%d %d", &m, &n);

    inputMatrix(matrix, m, n);

    replaceDuplicates(matrix, m, n);

    displayMatrix(matrix, m, n);

    return 0;
}
