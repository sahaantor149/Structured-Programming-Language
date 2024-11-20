#include <stdio.h>

int main() {
    int i, number, sum = 0;

    printf("Enter the number for sum: ");
    scanf("%d", &number);

    for (i=1; i <= number; i++)
    {
        if (i%2 == 0) {
            sum = sum - i;
        } else {
            sum = sum + i;
        }
    }
    printf("Result: %d\n", sum);

    return 0;
}