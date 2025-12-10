#include <stdio.h>

int main()
 {
    int arr[100], n, i;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
    }

    p = arr; 

    printf("odd elements in the array are:\n");
    for(i = 0; i < n; i++)
     {
        if (*(p + i) % 2 == 1)
         {  
            printf("%d ", *(p + i));
        }
    }

    return 0;
}
