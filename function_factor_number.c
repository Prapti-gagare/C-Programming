#include <stdio.h>

void findFactors(int n) 
{
    printf("Factors of %d are: ", n);
    for (int i = 1; i <= n; i++) 
    {
        if (n % i == 0)
            printf("%d ", i);
    }
}

int main()
 {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    findFactors(num);
    return 0;
}
