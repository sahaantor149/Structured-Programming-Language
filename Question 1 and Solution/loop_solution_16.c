#include <stdio.h>

int main() {
    int num1, num2, gcd, lcm, a, b, temp;

    // Prompt the user to enter two positive integers
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Initialize variables for the Euclidean algorithm
    a = num1;
    b = num2;

    // Find the GCD using the Euclidean algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // Calculate the LCM using the formula: LCM(a, b) = (a * b) / GCD(a, b)
    lcm = (num1 * num2) / gcd;

    // Print the calculated GCD and LCM
    printf("GCD: %d\n", gcd);
    printf("LCM: %d\n", lcm);

    return 0;
}