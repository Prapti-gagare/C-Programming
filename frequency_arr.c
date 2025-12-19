#include <stdio.h>

int main() 
{
    int a[100], freq[100];
    int n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[i] = -1;   
    }

   
    for (i = 0; i < n; i++) 
    {
        if (freq[i] != 0)
         {
            count = 1;
            for (j = i + 1; j < n; j++) 
            {
                if (a[i] == a[j])
                 {
                    count++;
                    freq[j] = 0;   
                }
            }
            freq[i] = count;
        }
    }

    
    printf("\nElement  Frequency\n");
    for (i = 0; i < n; i++) 
    {
        if (freq[i] != 0) 
        {
            printf("%d\t\t%d\n", a[i], freq[i]);
        }
    }

    return 0;
}