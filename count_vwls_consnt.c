#include <stdio.h>
#include <ctype.h>
void countVC(char str[], int *vowels, int *consonants)
{
    int i = 0;
    *vowels = 0;
    *consonants = 0;

    while (str[i] != '\0')
    {
        char ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                (*vowels)++;
            else
                (*consonants)++;
        }
        i++;
    }
}
int main()
{
    char word[100];
    int vowels, consonants;

    printf("Enter a word: ");
    scanf("%s", word);
    countVC(word, &vowels, &consonants);
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}
