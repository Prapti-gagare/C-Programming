#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

int main()
 {
    struct Point p1, p2;
    float distance;

    printf("Enter x and y for first point: ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Enter x and y for second point: ");
    scanf("%f %f", &p2.x, &p2.y);

    distance = sqrt( (p2.x - p1.x)*(p2.x - p1.x) +(p2.y - p1.y)*(p2.y - p1.y) );

    printf("\nDistance between points = %.2f\n", distance);

    return 0;
}
