#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sum = 0;
    int i, n = 15;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    for (i = 1; i <= n; i += 2) {
        term = pow(-1, (i - 1) / 2) * pow(x, i);
        double factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        term /= factorial;
        sum += term;
    }

    printf("sin(%.2lf) = %.3lf\n", x, sum);

    return 0;
}