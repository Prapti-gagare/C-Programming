#include <stdio.h>

int mod(int a, int b)
 {
    return a % b;
}

int main()
 {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Modulus = %d", mod(x, y));

    return 0;
}
