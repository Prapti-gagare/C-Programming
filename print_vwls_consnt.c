#include <stdio.h>
#include <ctype.h>
void printVowelsConsonants(char str[])
{
    int i;

    printf("Vowels: ");
    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u')
        {
            printf("%c ", str[i]);
        }
    }

    printf("\nConsonants: ");
    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z')
        {
            if (!(ch == 'a' || ch == 'e' || ch == 'i' ||
                  ch == 'o' || ch == 'u'))
            {
                printf("%c ", str[i]);
            }
        }
    }
}

int main()
{
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);
    printVowelsConsonants(word);

    return 0;
}
