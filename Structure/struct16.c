#include <stdio.h>

struct Bill 
{
    char name[50];
    int previousReading;
    int currentReading;
    int units;
    float amount;
};

int main() 
{
    struct Bill b;

    printf("Enter customer name: ");
    gets(b.name);

    printf("Enter previous meter reading: ");
    scanf("%d", &b.previousReading);

    printf("Enter current meter reading: ");
    scanf("%d", &b.currentReading);

    b.units = b.currentReading - b.previousReading;

    if (b.units <= 100)
        b.amount = b.units * 3.0;
    else if (b.units <= 300)
        b.amount = 100 * 3.0 + (b.units - 100) * 5.0;
    else
        b.amount = 100 * 3.0 + 200 * 5.0 + (b.units - 300) * 8.0;

    printf("\n---- ELECTRICITY BILL ----\n");
    printf("Customer Name   : %s\n", b.name);
    printf("Units Consumed  : %d\n", b.units);
    printf("Total Amount    : %.2f\n", b.amount);

    printf("Consumption Type: ");
    if (b.units < 150)
        printf("Low\n");
    else if (b.units <= 350)
        printf("Medium\n");
    else
        printf("High\n");

    return 0;
}
