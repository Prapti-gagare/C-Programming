#include <stdio.h>
int main() {
    char letter;
    printf("Lowercase letters from a to z:\n");
    for (letter = 'a'; letter <= 'z'; letter++) {
        printf("%c ", letter);
    }
    printf("\n");
    return 0;
}
