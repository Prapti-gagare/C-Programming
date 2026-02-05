#include<stdio.h>
int main()
{
    int n=0;
    int cnt=0;
    printf("Enter number");
    scanf("%d",&n);
    for(;n>0;)
    {
        int R=n%10;
        ++cnt;
        n=n/10;
    }
    printf("ans=%d",cnt);
return 0;
    }
