#include <stdio.h>

float calculatePercentage(float obtained, float total);

int main()
{
    float obtained, total, result;

    printf("Enter obtained marks: ");
    scanf("%f", &obtained);

    printf("Enter total marks: ");
    scanf("%f", &total);

    result = calculatePercentage(obtained, total);

    printf("Percentage = %.2f%%\n", result);

    return 0;
}

float calculatePercentage(float obtained, float total)
{
    return (obtained / total) * 100;
}
