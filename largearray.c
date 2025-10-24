#include <stdio.h>
#include <limits.h>  

int main()
 {
    int n, i;
    int arr[100];
    int smallest = INT_MAX, second_smallest = INT_MAX;
    int largest = INT_MIN, second_largest = INT_MIN;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2)
     {
        printf("Array must have at least two elements.\n");
        return 0;
    }

   
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < n; i++)
     {
        int num = arr[i];

        
        if (num < smallest)
         {
            second_smallest = smallest;
            smallest = num;
        } 
        else if (num > smallest && num < second_smallest) {
            second_smallest = num;
        }

       
        if (num > largest) 
        {
            second_largest = largest;
            largest = num;
        } 
        else if (num < largest && num > second_largest) {
            second_largest = num;
        }
    }

    if (second_smallest == INT_MAX)
        printf("No second smallest element (all elements may be equal).\n");
    else
        printf("Second smallest element = %d\n", second_smallest);

    if (second_largest == INT_MIN)
        printf("No second largest element (all elements may be equal).\n");
    else
        printf("Second largest element = %d\n", second_largest);

    return 0;
}
