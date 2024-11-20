#include <stdio.h>

int main() {
    int i, lastNumber;

    printf("Enter the last number of series: ");
    scanf("%d", &lastNumber);

    for (i=1; i <= lastNumber; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}