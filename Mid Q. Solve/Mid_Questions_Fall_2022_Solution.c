/*
***********************
Solution Number 01 -> a
***********************
*/

// #include <stdio.h>

// int main() {
//     int a = 17%7*5; 
//     float b = (int)(17.0/5); 
//     float c= 17/5; 
//     int d = (a>b) && c;

//     printf("%f\n", );
    
//     return 0;
// }

/*
************************
Solution Number 01 -> b
************************

1. sum_of_digit:
    Valid: It follows all rules for variable naming. It uses lowercase letters and underscores and does not use any reserved keywords.

2. switch:
    Invalid: switch is a reserved keyword in C and cannot be used as a variable name.

3. calculate sum:
    Invalid: Variable names cannot contain spaces. The space between calculate and sum makes it invalid.

4. _value_:
    Valid: Although starting with an underscore is not common practice, it is allowed in C. This variable name is valid.

5. Sum:
    Valid: C is case-sensitive, and Sum is not a reserved keyword. This is a valid variable name.

6. calculate-sum:
    Invalid: Variable names cannot contain hyphens (-). The hyphen is interpreted as a subtraction operator in C.

7. 1st_sum:
    Invalid: Variable names cannot begin with a digit. Starting with 1 makes it invalid.

***********************
Solution Number 01 -> c
***********************

The value of a is 15
The value of b is 3.00
The value of c is 3.00
The value of d is 1

***********************
Solution Number 02 -> a
***********************

The Output will be
    sum = 16
    i = 8
    j = 1

***********************
Solution Number 02 -> b
***********************
*/

// #include <stdio.h>

// int main() { 
//     int num=4, sum = 10, i =7, j = 2; 
    
//     if (num == 1 || num == 2) {
//         sum += --j*2; 
//         i--; 
//     } else if (num == 3) {
//         sum = ++i*j--;
//     } else if (num == 4) {
//         sum *= i++/j--; 
//         i=i%j; 
//     }
     
//     printf("%d %d %d",sum,i,j); 
//     return 0; 
// }

/*
***********************
Solution Number 03 -> a
***********************
*/

// #include <stdio.h>

// int main() {
//     int n, term, sum = 0;

//     // Input: Number of terms in the series
//     printf("Enter the number of terms (n): ");
//     scanf("%d", &n);

//     printf("Series: ");

//     // Loop to generate and print the series
//     for (int i = 1; i <= n; i++) {
//         term = 4 * i * i - 7 * i + 3; // Formula: 4n^2 - 7n + 3
//         printf("%d", term);
        
//         if (i < n) {
//             printf(", ");
//         }
        
//         sum += term; // Add the current term to the sum
//     }

//     printf("\nSum of the series: %d\n", sum); // Print the sum of the series

//     return 0;
// }

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Printing "H"s in the first and last row
        if (i == 1 || i == n) {
            printf("H ");
        } else {
            // Printing "H"s with spaces for the middle rows
            for (int j = 1; j <= n; j++) {
                if (j == 1 || j == n) {
                    printf("H ");
                } else {
                    printf("  ");  // For spaces
                }
            }
        }
        printf("\n");
    }

    return 0;
}


