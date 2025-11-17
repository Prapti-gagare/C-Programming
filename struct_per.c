#include <stdio.h>

struct Student
 {
    float marks1;
    float marks2;
    float marks3;
    float marks4;
    float marks5;
    float total;
    float percentage;
};

int main()
 {
    struct Student s;
    printf("Enter marks of 5 subjects:\n");
    scanf("%f %f %f %f %f",&s.marks1, &s.marks2, &s.marks3, &s.marks4, &s.marks5);
    s.total = s.marks1 + s.marks2 + s.marks3 + s.marks4 + s.marks5;
    s.percentage = (s.total / 500) * 100;
    printf("Total Marks = %.2f\n", s.total);
    printf("Percentage = %.2f%%\n", s.percentage);

    return 0;
}
