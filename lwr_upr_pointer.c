#include <stdio.h>

int main() 
{
    char str[100], *p;
    int upper = 0, lower = 0;

    printf("Enter a string: ");
    gets(str);  

    p = str;    

    while (*p != '\0') 
    {
        if (*p >= 'A' && *p <= 'Z') 
        {
            upper++;
        }
        else if (*p >= 'a' && *p <= 'z')
         {
            lower++;
        }
        p++;   
    }

    printf("Uppercase letters: %d\n", upper);
    printf("Lowercase letters: %d\n", lower);

    return 0;
}
