# include<stdio.h>
int main()
{
    int num=0;
    printf("Enter a number=");
    scanf("%d",&num);
    if(num>100 && num<200)
    {
        num=num/3;
        if(num<50)
        {
            printf("number is small");
        }
        else{
            printf("Not so big");
        }
    }
    else if(num>200 && num<300)
{
    num=num/2;
    if(num<110)
    {
        printf("number is smaller than 110");
    }
    else{
        num=num/5;
        printf("num=%d",num);
    }
}
else if(num>300)
    printf("very big number");
else
printf("very small number");
}