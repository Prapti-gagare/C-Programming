#include <stdio.h>

int main()
 {
    int num;
    int *p;

    printf("Enter a number: ");
    scanf("%d", &num);

    p = &num;   

    printf("Cube = %d\n", (*p) * (*p) * (*p));

    return 0;
}
