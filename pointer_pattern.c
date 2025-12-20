#include <stdio.h>

int main()
 {
    int n = 5;
    int i, j, space, star;

    int *pi = &i;
    int *pj = &j;
    int *ps = &space;
    int *pst = &star;

   
    for (*pi = 1; *pi <= n; (*pi)++)
     {
        for (*ps = 1; *ps <= n - *pi; (*ps)++)
            printf(" ");

        for (*pst = 1; *pst <= 2 * (*pi) - 1; (*pst)++)
            printf("*");

        printf("\n");
    }

   
    for (*pi = n - 1; *pi >= 1; (*pi)--) 
    {
        for (*ps = 1; *ps <= n - *pi; (*ps)++)
            printf(" ");

        for (*pst = 1; *pst <= 2 * (*pi) - 1; (*pst)++)
            printf("*");

        printf("\n");
    }

    return 0;
}
