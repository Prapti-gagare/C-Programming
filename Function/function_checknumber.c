#include <stdio.h>

void checkNumber(int n)
{
    if (n > 0)
        printf("Positive number");
    else if (n < 0)
        printf("Negative number");
    else
        printf("Zero");
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkNumber(num);
    return 0;
}
