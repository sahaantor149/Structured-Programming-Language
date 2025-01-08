#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the value of m and n: ");
    scanf("%d%d", &m, &n);

    int array_a[m][n], array_b[m][n], array_c[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &array_a[i][j]);
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &array_b[i][j]);
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            array_c[i][j] = array_a[i][j] + array_b[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", array_c[i][j]);
        }
        printf("\n");
    }

    return 0;
}