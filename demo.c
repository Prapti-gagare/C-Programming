#include <stdio.h>
#include <string.h>
int main() {
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word); 
    int length = strlen(word);
    printf("Number of letters in the word: %d\n", length);
    return 0;
}
