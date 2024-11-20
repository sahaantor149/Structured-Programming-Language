#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sum = 0;
    int i, n = 15;

    // Prompt the user to enter the value of x in radians
    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    // Calculate the sine of x using the Taylor series approximation
    for (i = 1; i <= n; i += 2) {
        // Calculate the current term of the series

        term = pow(-1, (i - 1) / 2) * pow(x, i);
        double factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        term /= factorial;
        sum += term;
    }

    // Print the calculated value of sin(x)
    printf("sin(%.2lf) = %.3lf\n", x, sum);

    return 0;
}