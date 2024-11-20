#include <stdio.h>

int main() {
    int i, totalNumber;

    printf("Enter the number for series: ");
    scanf("%d", &totalNumber);

    for (i=1; i <= totalNumber; i++)
    {
        printf("%d ", 2 * i - 1);
    }
    printf("\n");

    return 0;
}