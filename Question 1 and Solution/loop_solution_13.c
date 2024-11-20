#include <stdio.h>

int main() {
    int i, num, result = 1;

    printf("Enter the number for factorial: ");
    scanf("%d", &num);

    printf("%d! = ", num);
    for (i = 1; i <= num; i++) {
        result = result * i;
        printf("%d ", i);
        if (i < num) {
            printf("X ");
        }
    }

    printf("= %d\n", result);

    return 0;
}
