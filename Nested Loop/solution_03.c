#include <stdio.h>

int main() {
    int n, temp = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++){
            temp ++;
            printf("%d", temp);
        }
        
        temp = i;
        printf("\n");
    }

    return 0;
}