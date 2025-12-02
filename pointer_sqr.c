#include <stdio.h>

int main()
 {
    int num;
    int *p;

    printf("Enter a number: ");
    scanf("%d", &num);

    p = &num;   

    printf("Square = %d\n", (*p) * (*p));

    return 0;
}
