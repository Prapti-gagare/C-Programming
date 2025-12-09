#include <stdio.h>

int main() 
{
    int arr[100], n, i, count = 0;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    p = arr;  
    for(i = 0; i < n; i++) 
    {
        if (*(p + i) % 2 == 0) 
        {  
            count++;
        }
    }

    printf("Total even numbers = %d\n", count);

    return 0;
}
