#include <stdio.h>
#include <ctype.h>

int main()
 {
    char str[100];
    char *p;
    int count = 0;

    printf("Enter a string: ");
    gets(str);   

    p = str;     

    printf("Consonants in the string: ");

    while (*p != '\0')
     {
        char ch = tolower(*p);

        if ((ch >= 'a' && ch <= 'z') && 
            ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
             {
            
            printf("%c ", *p);
            count++;
        }

        p++; 
    }

    printf("\nTotal consonants = %d\n", count);

    return 0;
}
