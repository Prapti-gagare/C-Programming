#include <stdio.h>

int main()
 {
    int n;
    int sum = 0, expected_sum, missing;
    printf("Enter value of n: ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d numbers from 1 to %d (one number missing):\n", n - 1, n);
    for (int i = 0; i < n - 1; i++) 
    {
        scanf("%d", &arr[i]);
        sum += arr[i];  
    }

  
    expected_sum = n * (n + 1) / 2;

   
    missing = expected_sum - sum;

    
    printf("Missing number is: %d\n", missing);

    return 0;
}
