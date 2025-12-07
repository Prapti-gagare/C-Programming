#include <stdio.h>

int main()
 {
    int arr[100], n, i;
    int *p;
    int max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    p = arr;        
    max = *p;        

    for(i = 1; i < n; i++) 
    {
        if (*(p + i) > max) 
        {
            max = *(p + i);
        }
    }

    printf("Largest element = %d\n", max);

    return 0;
}
