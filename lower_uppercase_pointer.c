#include <stdio.h>

int main()
 {
    char str[50], *p;

    printf("Enter a word: ");
    scanf("%s", str);

    p = str;

    while (*p != '\0')
     {
        if (*p >= 'a' && *p <= 'z') 
        {
            *p = *p - 32;   
        }
        p++;
    }

    printf("Uppercase: %s\n", str);

    return 0;
}
