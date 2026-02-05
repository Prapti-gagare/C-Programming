#include <stdio.h>

struct Pet 
{
    char name[50];
    char type[30];   
    int age;         
    float weight;   
};

int main() 
{
    struct Pet p;

    printf("Enter pet name: ");
    scanf("%s", p.name);

    printf("Enter pet type: ");
    scanf("%s", p.type);

    printf("Enter pet age (years): ");
    scanf("%d", &p.age);

    printf("Enter pet weight (kg): ");
    scanf("%f", &p.weight);

    printf("\n--- Pet Details ---\n");
    printf("Name   : %s\n", p.name);
    printf("Type   : %s\n", p.type);
    printf("Age    : %d years\n", p.age);
    printf("Weight : %.2f kg\n", p.weight);

    return 0;
}
