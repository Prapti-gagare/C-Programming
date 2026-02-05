#include <stdio.h>

int main() {
    int month, year, days;

    // Get month and year from user
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    // Check for valid month
    if (month < 1 || month > 12) {
        printf("Invalid month number. Please enter a value from 1 to 12.\n");
        return 1;
    }
        switch(month) 
        {
    case 1: 
        days = 31;
        break;
    case 2: 
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            days = 29;
        else
            days = 28;
        break;
    case 3:  
        days = 31;
        break;
    case 4:
        days = 30;
        break;
    case 5: 
        days = 31;
        break;
    case 6: 
        days = 30;
        break;
    case 7:
        days = 31;
        break;
    case 8: 
        days = 31;
        break;
    case 9: 
        days = 30;
        break;
    case 10: 
        days = 31;
        break;
    case 11:
        days = 30;
        break;
    case 12:
        days = 31;
        break;

}

printf("Number of days in month %d of year %d: %d\n", month, year, days);
return 0;
}
