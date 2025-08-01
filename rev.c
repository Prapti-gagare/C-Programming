#include<stdio.h>
int main()
{
    int n=0,ans=0;
    printf("Enter number");
    scanf("%d",&n);
    for(;n>0;)
    {
int R=n%10;
ans=(ans*10)+R;
n=n/10;
    }
    printf("the answer is %d",ans);
    return 0;
}