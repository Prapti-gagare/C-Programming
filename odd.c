# include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("a=%d is even",a);
    }
    else
    {
         printf("a=%d is odd",a);
    }
}