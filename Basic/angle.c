#include <stdio.h>

int main()
 {
    float angle1, angle2, angle3, sum;
    printf("Enter three angles of the triangle: ");
    scanf("%f %f %f", &angle1, &angle2, &angle3);
    sum = angle1 + angle2 + angle3;
    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && sum == 180)
        printf("The triangle is valid.\n");
    else
        printf("The triangle is not valid.\n");

    return 0;
}
