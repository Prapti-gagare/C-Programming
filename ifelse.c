#include <stdio.h>

int main() 
{
    int a;

    printf("Enter number:\n");
    scanf("%d", &a);

    if (a > 0) 
    {
        printf("Number is positive\n");
    }
    else if (a < 0)
     {
        printf("Number is negative\n");
    }
     else
      {
        printf("Number equal to 0\n");
    }

    return 0;
}
