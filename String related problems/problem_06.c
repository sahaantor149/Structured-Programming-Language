#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter the string: ");
    gets(str);

    // Convert the string into uppercase
    strupr(str);

    printf("%s", str);

    return 0;
}


