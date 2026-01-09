#include <stdio.h>

void removeVowels(char word[])
 {
    int i, j = 0;

    for (i = 0; word[i] != '\0'; i++) {
        if (!(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u' ||
              word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' || word[i]=='U')) {
            word[j++] = word[i];
        }
    }
    word[j] = '\0';
}

int main() 
{
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    removeVowels(word);

    printf("Word after removing vowels: %s", word);
    return 0;
}
