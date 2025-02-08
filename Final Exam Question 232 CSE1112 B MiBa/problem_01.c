#include <stdio.h>

int is_fibonacci(int x);
int count_odd_digits(int x);
int is_warrior(int x);
void list_fibonacci_warriors(int limit);

int main() {
    int limit;
    printf("Enter the upper range: ");
    scanf("%d", &limit);
    list_fibonacci_warriors(limit);
    return 0;
}

int is_fibonacci(int x) {
    int a = 0, b = 1, next;

    if (x == a || x == b) {
        return 1;
    }

    while (b < x) {
        next = a + b;
        a = b;
        b = next;
    }

    if (b == x) {
        return 1;
    }
    return 0;
}

int count_odd_digits(int x) {
    if (x == 0) return 0;
    return ((x % 10) % 2 != 0) + count_odd_digits(x / 10);
}

int is_warrior(int x) {
    if (is_fibonacci(x) && (count_odd_digits(x) % 2 == 0)) {
        return 1;
    }
    return 0;
}

void list_fibonacci_warriors(int limit) {
    printf("Amicable number pairs within the range %d:\n", limit);
    for (int i = 1; i <= limit; i++) {
        if (is_warrior(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
