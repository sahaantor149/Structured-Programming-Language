#include <stdio.h>

int main() {
    int n, r, i;
    long long nFact = 1, rFact = 1, n_rFact = 1, nCr;

    printf("Enter values of n and r (n >= r): ");
    scanf("%d %d", &n, &r);

    for (i = 1; i <= n; i++) {
        nFact *= i;
    }

    for (i = 1; i <= r; i++) {
        rFact *= i;
    }

    for (i = 1; i <= (n - r); i++) {
        n_rFact *= i;
    }

    nCr = nFact / (rFact * n_rFact);

    printf("nCr: %lld\n", nCr);

    return 0;
}
