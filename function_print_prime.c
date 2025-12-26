#include <stdio.h>

int isPrime(int num)
 {
    if (num <= 1)
        return 0;

    for (int i = 2; i <= num / 2; i++) 
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void printPrimes(int n)
 {
    printf("Prime numbers up to %d:\n", n);
    for (int i = 2; i <= n; i++)
     {
        if (isPrime(i))
         {
            printf("%d ", i);
        }
    }
}

int main() 
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printPrimes(n);
    return 0;
}
