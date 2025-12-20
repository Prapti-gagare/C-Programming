#include <stdio.h>

int main() 
{
    int n = 4;
    int i, j, space;
    
    int *pi = &i;
    int *pj = &j;
    int *ps = &space;

    
    for (*pi = 1; *pi <= n; (*pi)++)
     {

        for (*ps = n - *pi; *ps > 0; (*ps)--)
            printf(" ");

        for (*pj = 1; *pj <= *pi; (*pj)++)
            printf("%d", *pj);

        for (*pj = *pi - 1; *pj >= 1; (*pj)--)
            printf("%d", *pj);

        printf("\n");
    }

   
    for (*pi = n - 1; *pi >= 1; (*pi)--) 
    {

        for (*ps = n - *pi; *ps > 0; (*ps)--)
            printf(" ");

        for (*pj = 1; *pj <= *pi; (*pj)++)
            printf("%d", *pj);

        for (*pj = *pi - 1; *pj >= 1; (*pj)--)
            printf("%d", *pj);

        printf("\n");
    }

    return 0;
}
