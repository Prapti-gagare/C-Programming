#include <stdio.h>

int main() 
{
    int arr[100], size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
     {
        scanf("%d", &arr[i]);
    }

    printf("Leaders in the array are: ");

    int maxFromRight = arr[size - 1];
    printf("%d ", maxFromRight);
    for (int i = size - 2; i >= 0; i--)
     {
        if (arr[i] > maxFromRight)
         {
            maxFromRight = arr[i];
            printf("%d ", maxFromRight);
        }
    }

    printf("\n");
    return 0;
}
