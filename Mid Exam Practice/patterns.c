#include <stdio.h>

void pattern_1 (int n) {
    int number = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            printf(" ");
        }

        for (int j = 0; j < i + 1; j++) {
            if (number > 5) {
                number = 1;
            }
            printf("%d", number++);
        }
        printf("\n");
    }
}

void pattern_2 (int n) {
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= n - i - 1; j++) {
            printf(" ");
        }
        
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }

        for (int j = 2; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

void pattern_3 (int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == i || j == n - i + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void pattern_4 (int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern_5 (int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern_6 (int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i == 3) || (j == 3)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void pattern_7 (int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void pattern_8 (int n) {
    for (int i = 1; i <= n; i += 2) {
        for (int j = 1; j <= (n - i) / 2; j++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern_9 (int n) {
    for (int i = n; i >= 1; i -= 2) {
        for (int j = 1; j <= (n - i) / 2; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern_10 (int n) {
    for (int i = 1; i <= n; i += 2) {
        for (int j = i; j < n; j += 2) {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 2; i >= 1; i -= 2) {
        for (int j = n; j > i; j -= 2) {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n = 5;

    printf("Pattern 1:\n");
    // Pattern Output

    //         1
    //       2 3
    //     4 5 1
    //   2 3 4 5
    // 1 2 3 4 5

    pattern_1(n);

    printf("\nPattern 2:\n");
    // Pattern Output

    //       1
    //     2 1 2
    //   3 2 1 2 3
    // 4 3 2 1 2 3 4

    pattern_2(n);

    printf("\nPattern 3:\n");
    // Pattern Output

    // *       *
    //   *   *
    //     *
    //   *   *
    // *       *

    pattern_3(n);

    printf("\nPattern 4:\n");
    // Pattern Output

    // *       *
    //   *   *
    //     *
    //   *   *
    // *       *

    pattern_4(n);

    printf("\nPattern 5:\n");
    // Pattern Output

    // *       *
    //   *   *
    //     *
    //   *   *
    // *       *

    pattern_5(n);

    printf("\nPattern 6:\n");
    // Pattern Output

    //     *
    //     *
    // * * * * *
    //     *
    //     *

    pattern_6(n);

    printf("\nPattern 7:\n");
    // Pattern Output

    //     *
    //     *
    // * * * * *
    //     *
    //     *

    pattern_7(n);

    printf("\nPattern 8:\n");
    // Pattern Output

    //     *
    //   * * *
    // * * * * *

    pattern_8(n);

    printf("\nPattern 9:\n");
    // Pattern Output

    //   *****
    //    ***
    //     *

    pattern_9(n);

    printf("\nPattern 10:\n");
    // Pattern Output

    //     *
    //   * * *
    // * * * * *
    //   * * *
    //     *

    pattern_10(n);

    return 0;
}