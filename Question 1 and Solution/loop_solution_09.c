#include <stdio.h>

int main() {
    int i, numberOfStudents;
    float a, hw, ct, mt, tf, totalNumber;

    printf("Number of students: ");
    scanf("%d", &numberOfStudents);

    for (i=1; i <= numberOfStudents; i++){
        printf("Enetr the marks of A HW CT MT TF: ");
        scanf("%f%f%f%f%f", &a, &hw, &ct, &mt, &tf);

        totalNumber = ((a * (5.0/5)) + (hw * (10.0/10)) + (ct * (15.0/15)) + (mt * (30.0/50)) + (tf * (40.0/100)));

        if (totalNumber >= 90 && totalNumber <= 100) {
            printf("Student %d: A\n", i);
        } else if (totalNumber >= 86 && totalNumber <= 89) {
            printf("Student %d: A-\n", i);
        } else if (totalNumber >= 82 && totalNumber <= 85) {
            printf("Student %d: B+\n", i);
        } else if (totalNumber >= 78 && totalNumber <= 81) {
            printf("Student %d: B\n", i);
        } else if (totalNumber >= 74 && totalNumber <= 77) {
            printf("Student %d: B-\n", i);
        } else if (totalNumber >= 70 && totalNumber <= 73) {
            printf("Student %d: C+\n", i);
        } else if (totalNumber >= 66 && totalNumber <= 69) {
            printf("Student %d: C\n", i);
        } else if (totalNumber >= 62 && totalNumber <= 65) {
            printf("Student %d: C-\n", i);
        } else if (totalNumber >= 58 && totalNumber <= 61) {
            printf("Student %d: D+\n", i);
        } else if (totalNumber >= 55 && totalNumber <= 57) {
            printf("Student %d: D\n", i);
        } else {
            printf("Student %d: F\n", i);
        }
    }

    return 0;
}