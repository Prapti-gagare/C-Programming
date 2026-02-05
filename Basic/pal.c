#include <stdio.h>
int main()
{
    int n,ans=0;
    printf("Enter number: ");
    scanf("%d",&n);
    int n1=n;
    while (n>0)
    {
        int R = n%10;
        ans = (ans*10)+R;
        n = n/10;
    }
    printf("Reversed number = %d\n",ans);
    if (n1==ans)
    {
        printf("%d is a palindrome.\n",n1);
    }
    else
    {
        printf("%d is not a palindrome.\n",n1);
    }
    return 0;
}
