#include <stdio.h>

int main() {
    int i, number, firstNumber = 1, lastNumber = 1, nextNumber;

    printf("Enter the number for series: ");
    scanf("%d", &number);

    for (i=1; i <= number; i++)
    {
        printf("%d ", firstNumber);
        nextNumber = firstNumber + lastNumber;
        firstNumber = lastNumber;
        lastNumber = nextNumber;
    }

    return 0;
}