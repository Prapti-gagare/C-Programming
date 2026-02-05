#include <stdio.h>

int main()
 {
    double numerator, denominator, result;
    printf("Enter the numerator: ");
    scanf("%lf", &numerator);
    printf("Enter the denominator: ");
    scanf("%lf", &denominator);
    if (denominator == 0) {
        printf("Error: Division by zero is not allowed.\n");
    }
     else{
        result = numerator / denominator;
        printf("Result: %.2lf\n", result);
    }
    return 0;
}
