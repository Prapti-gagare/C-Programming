#include <stdio.h>
float div(float a, float b) 
{
    return a / b;
}

int main() 
{
    float x, y, divide;

    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);

    divide = div(x, y);

    printf("dividation = %f\n", divide);

    return 0;
}
