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

int main()
 {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("GCD = %d", findGCD(&a, &b));
    return 0;
}
