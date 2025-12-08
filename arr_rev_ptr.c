#include <stdio.h>

int main()
 {
    int arr[100], n, i;
    int *p, *q, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
    }

    p = arr;           
    q = arr + n - 1;   

    while(p < q)
     {
        temp = *p;
        *p = *q;
        *q = temp;

        p++;   
        q--;   
    }
    printf("Reversed array:\n");
    for(i = 0; i < n; i++)
     {
        printf("%d ", arr[i]);
    }

    return 0;
}
