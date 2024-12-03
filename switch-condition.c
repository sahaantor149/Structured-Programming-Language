#include <stdio.h>

int main() {
    int score;

    printf("Enter the runs scored by the batsman: ");
    scanf("%d", &score);

    switch (score / 10) {
        case 10: // 10 - 9
        case 9: // 10 - 9
            printf("Grade: Excellent\n");
            break;
        case 8: // 70 - 8.9
        case 7: // 70 - 8.9
            printf("Grade: Very Good\n");
            break;
        case 6: // 5 - 6.9
        case 5: // 5 - 6.9
            printf("Grade: Good\n");
            break;
        case 4: // 2 - 4.9
        case 3: // 2- 4.9
        case 2: // 2 - 4.9
            printf("Grade: Average\n");
            break;
        default:
            if (score < 20)
                printf("Grade: Poor\n");
            else
                printf("Invalid score\n");
    }

    return 0;
}
