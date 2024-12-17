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

//     printf("Enter the number of terms (n): ");
//     scanf("%d", &n);

//     printf("Series: ");

//     for (int i = 1; i <= n; i++) {
//         term = 4 * i * i - 7 * i + 3;
//         printf("%d", term);
        
//         if (i < n) {
//             printf(", ");
//         }
        
//         sum += term;
//     }

//     printf("\nSum of the series: %d\n", sum);

//     return 0;
// }

/*
***********************
Solution Number 03 -> b
***********************


Initial Values:
    i = undefined
    j = undefined
    count = 0
    n = 4

Iteration Table:

    | Step |  i  |  j  |  Count  |
    |------|---  |---  |-------  |
    | 1    |  1  |  -  |    0    |
    | 2    |  1  |  1  |    1    |
    | 3    |  1  |  2  |    2    |
    | 4    |  1  |  3  |    3    |
    | 5    |  1  |  -  |    0    |
    | 6    |  2  |  -  |    0    |
    | 7    |  2  |  1  |    1    |
    | 8    |  2  |  2  |    2    |
    | 9    |  2  |  -  |    0    |
    | 10   |  3  |  -  |    0    |
    | 11   |  3  |  1  |    1    |
    | 12   |  3  |  -  |    0    |
    | 13   |  4  |  -  |    0    |
    | 14   |  4  |  -  |    0    |

Final Output:

At the end of the program:
    1. The variables i, j, and count reset as per the loop logic.
    2. The final values are:
        1. i = 5 (loop exits as i > n).
        2. j = - (no value as the inner loop is done).
        3. count = 0 (reset by count = 0).



***********************
Solution Number 04 -> a
***********************