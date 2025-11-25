#include <stdio.h>

struct Movie 
{
    char name[50];
    char genre[30];
    int duration;     
    float rating;   
};

int main() 
{
    struct Movie m;

    printf("Enter movie name: ");
    scanf("%s", m.name);

    printf("Enter genre: ");
    scanf("%s", m.genre);

    printf("Enter duration (in minutes): ");
    scanf("%d", &m.duration);

    printf("Enter IMDb rating: ");
    scanf("%f", &m.rating);

    printf("\n--- Movie Details ---\n");
    printf("Name     : %s\n", m.name);
    printf("Genre    : %s\n", m.genre);
    printf("Duration : %d minutes\n", m.duration);
    printf("Rating   : %.1f / 10\n", m.rating);

    return 0;
}
