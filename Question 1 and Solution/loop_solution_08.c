#include <stdio.h>

int main() {
    int number, rev_num = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    while (number > 0) { 
        rev_num = rev_num * 10 + number % 10; 
        number = number / 10; 
    } 
    printf("%d\n", rev_num);

    return 0;
}