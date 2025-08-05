#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a and b\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap \n a=%d\nb=%d\n",a,b);
    return 0;
}