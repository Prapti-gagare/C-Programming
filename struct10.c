#include <stdio.h>

struct Triangle 
{
    float base;
    float height;
};

int main()
 {
    struct Triangle t;
    float area;

    printf("Enter base of the triangle: ");
    scanf("%f", &t.base);

    printf("Enter height of the triangle: ");
    scanf("%f", &t.height);

    area = 0.5 * t.base * t.height;

    printf("\n--- Triangle Details ---\n");
    printf("Base   = %.2f\n", t.base);
    printf("Height = %.2f\n", t.height);
    printf("Area   = %.2f\n", area);

    return 0;
}
