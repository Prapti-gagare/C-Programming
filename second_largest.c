#include <stdio.h>

int main() 
{
    int a, b, c;
    int second;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a > c && a < b))
        second = a;
    else if ((b > a && b < c) || (b > c && b < a))
        second = b;
    else
        second = c;

    printf("The second largest number is: %d\n", second);

    return 0;
}
