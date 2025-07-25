#include<stdio.h>
int main()
{
    char op;
    int a,b;
    printf("enter operation(+,-,*,/)=");
    scanf("%c",&op);
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    double ans;
    switch(op)
    {
        case '+':
        ans=a+b;
        printf("%2f\n",ans);
        break;
        case '-':
        ans=a-b;
        printf("%2f\n",ans);
        break;
        case '*':
        ans=a*b;
        printf("%2f\n",ans);
        break;
        case '/':
         ans=b!=0?a/b:0;
         printf("%2f\n",ans);
         break;
         default:
         printf("enter valid operations %c",op);
    }
    return 0;
}