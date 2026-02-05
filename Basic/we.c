#include <stdio.h>
int main() 
{
    int n, sum = 0, i = 2;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 2)
     {
        printf("There are no even numbers up to %d.\n", n);
        return 0;
    }
    while (i <= n) {
        sum += i;
        i += 2; 
    }
    printf("Sum of all even numbers up to %d is: %d\n", n, sum);
    return 0;
}
