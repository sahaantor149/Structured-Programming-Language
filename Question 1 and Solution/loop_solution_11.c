#include <stdio.h>

int main() {
    int i, num, sum = 0;
    printf("Enter the number for sum: ");
    scanf("%d", &num);

    for (i=1; i <= num; i++)
    {
        sum = sum + (i * i * (i + 1));
    }
    printf("Result: %d\n", sum);

    return 0;
}