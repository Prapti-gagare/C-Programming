#include<stdio.h>
int main()
{
    int i,n=0;
    printf("Enter no");
    scanf("%d",&n);
    for(i=1;i<=12;++i)
    {
printf("table:%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}