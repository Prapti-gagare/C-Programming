#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, i, flag = 1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
     {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n / 2; i++) 
    {
        if (arr[i] != arr[n - i - 1])
         {
            flag = 0; 
            break;
        }
    }
    if (flag!=0)
        printf("The array is a palindrome.\n");
    else
        printf("The array is not a palindrome.\n");
    free(arr);

    return 0;
}
