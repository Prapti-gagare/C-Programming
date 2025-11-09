#include <stdio.h>
#include <math.h>

int main() 
{
    int num, n, remainder, count, i;
    double result;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d are:\n", n);

    for (i = 1; i <= n; i++)
     {
        int temp = i;
        count = 0;
        result = 0.0;

        while (temp != 0)
         {
            temp /= 10;
            ++count;
        }

        temp = i;

        while (temp != 0) 
        {
            remainder = temp % 10;
            result += pow(remainder, count);
            temp /= 10;
        }

        if ((int)result == i)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
