#include <stdio.h>

int main() 
{
    float meter, centimeter;

    printf("Enter length in meters: ");
    scanf("%f", &meter);

    centimeter = meter * 100;

    printf("Length in centimeters: %.2f cm\n", centimeter);

    return 0;
}
