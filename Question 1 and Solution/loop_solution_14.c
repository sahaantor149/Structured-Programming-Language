#include <stdio.h>

int main() {
    int n, r, i;
    long long nFact = 1, rFact = 1, n_rFact = 1, nCr;

    // Prompt the user to enter values for n and r
    printf("Enter values of n and r (n >= r): ");
    scanf("%d %d", &n, &r);

    // Calculate n!
    for (i = 1; i <= n; i++) {
        nFact *= i;
    }

    // Calculate r!
    for (i = 1; i <= r; i++) {
        rFact *= i;
    }

    // Calculate (n-r)!
    for (i = 1; i <= (n - r); i++) {
        n_rFact *= i;
    }

    // Calculate nCr using the formula nCr = n! / (r! * (n-r)!)
    nCr = nFact / (rFact * n_rFact);

    // Print the calculated value of nCr
    printf("nCr: %lld\n", nCr);

    return 0;
}