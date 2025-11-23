#include <stdio.h>

struct Date
 {
    int day;
    int month;
    int year;
};

int main()
 {
    struct Date d1, d2;

    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);

    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);

    printf("\nComparing dates...\n");

    if (d1.year < d2.year)
        printf("First date is earlier.\n");
    else if (d1.year > d2.year)
        printf("Second date is earlier.\n");
    else 
    {
        if (d1.month < d2.month)
            printf("First date is earlier.\n");
        else if (d1.month > d2.month)
            printf("Second date is earlier.\n");
        else 
        {
            if (d1.day < d2.day)
                printf("First date is earlier.\n");
            else if (d1.day > d2.day)
                printf("Second date is earlier.\n");
            else
                printf("Both dates are the same.\n");
        }
    }

    return 0;
}
