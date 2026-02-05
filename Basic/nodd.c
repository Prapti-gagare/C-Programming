#include <stdio.h>
int main()
 {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("Please enter a number greater than 0.\n");
        return 1;
    }
    for (int i = 1; i <= n; i += 2) 
    {
        sum += i;
    }
    printf("Sum of odd numbers up to %d is %d\n", n, sum);
    return 0;
}
