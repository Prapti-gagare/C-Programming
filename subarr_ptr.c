#include <stdio.h>

int main()
 {
    int arr[100], n, i, sub;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
    }

    p = arr;  

    sub = *p;    
    for(i = 1; i < n; i++)
     {
        sub -= *(p + i);  
    }

    printf("Subtraction of array elements = %d\n", sub);

    return 0;
}
