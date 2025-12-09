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

    printf("Even elements in the array are:\n");
    for(i = 0; i < n; i++)
     {
        if (*(p + i) % 2 == 0)
         {  
            printf("%d ", *(p + i));
        }
    }

    return 0;
}
