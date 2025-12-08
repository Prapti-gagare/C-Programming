#include <stdio.h>

int main() 
{
    int arr1[100], arr2[100], n, i;
    int *p1, *p2;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements for first array:\n", n);
    for(i = 0; i < n; i++)
     {
        scanf("%d", &arr1[i]);
     }
    p1 = arr1;  
    p2 = arr2;   
    for(i = 0; i < n; i++)
     {
        *(p2 + i) = *(p1 + i);
    }
    printf("\nOriginal Array (arr1):\n");
    for(i = 0; i < n; i++)
     {
        printf("%d ", *(p1 + i));
    }
    printf("\nCopied Array (arr2):\n");
    for(i = 0; i < n; i++)
     {
        printf("%d ", *(p2 + i));
    }

    return 0;
}
