#include <stdio.h>
int isVowel(char ch)
 {
    if (ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' ||
        ch == 'O' || ch == 'U')
        return 1;
    else
        return 0;
}

int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);   

    if (isVowel(ch))
        printf("%c is a Vowel\n", ch);
    else
        printf("%c is NOT a Vowel\n", ch);

    return 0;
}
