#include <stdio.h>

int main() {
    int i, totalNumber;

    printf("Enter the number for series: ");
    scanf("%d", &totalNumber);

    for (i=1; i <= totalNumber; i++)
    {
        if (i%2 == 0) {
            printf("0 ");
        } else {
            printf("1 ");
        }
    }
    printf("\n");

    return 0;
}