#include <stdio.h>
#include <math.h> 

int main()
 {
    long long binary_num;
    int decimal_num = 0, i = 0, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary_num);

    while (binary_num != 0)
     {
        remainder = binary_num % 10; 
        decimal_num += remainder * pow(2, i); 
        binary_num /= 10; 
        ++i; 
    }

    printf("Decimal equivalent: %d\n", decimal_num);

    return 0;
}