#include <stdio.h>

int main() {
    int score;

    printf("Enter the student's score (0-100): ");
    scanf("%d", &score);
    if (score >= 0 && score <= 100) {
        if (score >= 90) {
            printf("Grade: A\n");
            printf("Status: Pass\n");
        } else if (score >= 80) {
            printf("Grade: B\n");
            printf("Status: Pass\n");
        } else if (score >= 70) {
            printf("Grade: C\n");
            printf("Status: Pass\n");
        } else if (score >= 60) {
            printf("Grade: D\n");
            printf("Status: Pass\n");
        } else {
            printf("Grade: F\n");
            printf("Status: Fail\n");
        }

    } else {
        printf("Invalid score. Please enter a value between 0 and 100.\n");
    }

    return 0;
}
