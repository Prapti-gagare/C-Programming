#include <stdio.h>
int main()
 {
    char letter;
    int count = 0;
    for (letter = 'a'; count < 5; letter++, count++) {
        printf("%c ", letter);
    }
    printf("\n");
    return 0;
}
