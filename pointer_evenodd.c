#include <stdio.h>

int main() 
{
    int num;
    int *p;

    printf("Enter a number: ");
    scanf("%d", &num);

    p = &num;

    if (*p % 2 == 0)
        printf("%d is Even\n", *p);
    else
        printf("%d is Odd\n", *p);

    return 0;
}
