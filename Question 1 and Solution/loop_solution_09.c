#include <stdio.h>

int main() {
    int i, numberOfStudents;
    float a, hw, ct, mt, tf, totalNumber;

    // Get the number of students from the user
    printf("Number of students: ");
    scanf("%d", &numberOfStudents);

    // Iterate through each student
    for (i = 1; i <= numberOfStudents; i++) {
        // Get the marks for the current student
        printf("Enter the marks of A HW CT MT TF for Student %d: ", i);
        scanf("%f%f%f%f%f", &a, &hw, &ct, &mt, &tf);

        // Calculate the total number based on the given weights
        totalNumber = ((a * (5.0 / 5)) + (hw * (10.0 / 10)) + (ct * (15.0 / 15)) + (mt * (30.0 / 50)) + (tf * (40.0 / 100)));

        // Determine the grade based on the total number
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
        } else if (totalNumber <= 57) {
            printf("Student %d: F\n", i);
        }
    }

    return 0;
}