#include <stdio.h>

int main() {
    int i, totalNumber;
    float number, sum, average;

    printf("Enter the number of inputs: ");
    scanf("%d", &totalNumber);

    for (i = 1; i <= totalNumber; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &number);
        sum += number;
    }

    average = sum / totalNumber;

    printf("AVG of %d inputs: %.6f\n", totalNumber, average);

    return 0;
}