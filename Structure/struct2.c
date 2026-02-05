#include <stdio.h>

struct Rectangle
{
    float length;
    float breadth;
};

int main()
{
    struct Rectangle r;
    float area;

    printf("Enter length: ");
    scanf("%f", &r.length);

    printf("Enter breadth: ");
    scanf("%f", &r.breadth);

    area = r.length * r.breadth;

    printf("\nArea of Rectangle = %.2f\n", area);

    return 0;
}
