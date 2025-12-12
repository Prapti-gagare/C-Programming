#include <stdio.h>
#include <ctype.h>

int main() 
{
    char ch, choice;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("\nChoose an operation:\n");
    printf("U - Convert to Uppercase\n");
    printf("L - Convert to Lowercase\n");
    printf("V - Check if Vowel\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);

    switch (choice) 
    {
        case 'U':
        case 'u':
            printf("Uppercase: %c\n", toupper(ch));
            break;

        case 'L':
        case 'l':
            printf("Lowercase: %c\n", tolower(ch));
            break;

        case 'V':
        case 'v':
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') 
                {
                printf("%c is a vowel.\n", ch);
            }
             else
              {
                printf("%c is not a vowel.\n", ch);
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
