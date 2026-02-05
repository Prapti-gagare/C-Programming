#include <stdio.h>
int main() 
{
    int n, sum = 0;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    printf("Sum of all even numbers up to %d is: %d\n", n, sum);

    return 0;
}
