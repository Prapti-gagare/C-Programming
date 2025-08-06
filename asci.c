#include<stdio.h>
int main()
{
    int i=65;
    printf("Uppercase:\n");
    printf("dec \t char \n");
    while(i<=90)
    {
        printf("%d\t %c\n",i,i);
        i++;

    }
    return 0;
}