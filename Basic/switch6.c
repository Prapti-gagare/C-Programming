#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter your marks (0 - 100): ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
        grade = 'A';
    else if (marks >= 80)
        grade = 'B';
    else if (marks >= 70)
        grade = 'C';
    else if (marks >= 60)
        grade = 'D';
    else if (marks >= 50)
        grade = 'E';
    else if (marks >= 0)
        grade = 'F';
    else {
        printf("Invalid marks entered.\n");
        return 1;  
    }

    
    switch(grade) {
        case 'A':
            printf("Grade: A - Excellent!\n");
            break;
        case 'B':
            printf("Grade: B - Very Good!\n");
            break;
        case 'C':
            printf("Grade: C - Good\n");
            break;
        case 'D':
            printf("Grade: D - Satisfactory\n");
            break;
        case 'E':
            printf("Grade: E - Needs Improvement\n");
            break;
        case 'F':
            printf("Grade: F - Failed\n");
            break;
        default:
            printf("Something went wrong.\n");
    }

    return 0;
}

