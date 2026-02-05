#include <stdio.h>

int main() 
{
    int limit, i;
    long long sum = 0;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    i = 1;
    while (i <= limit) 
    {
        sum += (i * i * i);  
        i++;
    }

    printf("Sum of cubes up to %d = %lld\n", limit, sum);

    return 0;
}
