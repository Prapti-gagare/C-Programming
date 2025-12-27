#include <stdio.h>

int findGCD(int *a, int *b)
 {
    int x = *a, y = *b;

    while (y != 0)
     {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int findLCM(int *a, int *b) 
{
    int gcd = findGCD(a, b);
    return (*a * *b) / gcd;
}

int main()
 {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("LCM of %d and %d is %d\n", a, b, findLCM(&a, &b));

    return 0;
}
