#include <stdio.h>

struct Car 
{
    char model[50];
    char color[20];
    int year;
    float price;
};

int main() 
{
    struct Car c;

    printf("Enter car model: ");
    scanf("%s", c.model);

    printf("Enter car color: ");
    scanf("%s", c.color);

    printf("Enter manufacturing year: ");
    scanf("%d", &c.year);

    printf("Enter car price: ");
    scanf("%f", &c.price);

    printf("\n--- Car Details ---\n");
    printf("Model : %s\n", c.model);
    printf("Color : %s\n", c.color);
    printf("Year  : %d\n", c.year);
    printf("Price : %.2f\n", c.price);

    return 0;
}
