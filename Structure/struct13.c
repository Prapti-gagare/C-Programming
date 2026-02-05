#include <stdio.h>

int main() 
{
    char signal;

    printf("Enter traffic signal (R/G/Y): ");
    scanf(" %c", &signal);

    switch (signal)
     {
        case 'R':
        case 'r':
            printf("RED → Stop the vehicle.\n");
            break;

        case 'G':
        case 'g':
            printf("GREEN → You may go.\n");
            break;

        case 'Y':
        case 'y':
            printf("YELLOW → Slow down and prepare to stop.\n");
            break;

        default:
            printf("Invalid signal!\n");
    }

    return 0;
}
