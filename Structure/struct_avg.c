#include <stdio.h>

struct Average 
{
    int count;
    float sum;
    float avg;
};

int main() 
{
    struct Average A;
    A.sum = 0;      
    A.count = 0;    

    int n;
    float num;

    printf("Enter how many numbers: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
     {
        printf("Enter number %d: ", i+1);
        scanf("%f", &num);

        A.sum += num;   
        A.count++;     
    }

    A.avg = A.sum / A.count;

    printf("Average = %.2f\n", A.avg);

    return 0;
}
