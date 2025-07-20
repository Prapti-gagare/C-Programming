#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    double N = (x*x*x)+(2*x)+(3-y*y);
    
    if (N< 0) {
        printf("Square root of a negative number.\n");
        return 1;
    }

    N = sqrt(N);
    int D= (2*x*x)*(y*y);

    if (D == 0) {
        printf("Divisible by zero.\n");
        return 1;
    }

    double answer = N/D;
    printf("Result = %lf\n", answer);

    return 0;
}
