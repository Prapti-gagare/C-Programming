#include <stdio.h>

int main()
 {
    int num;

    // Read an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    
    if (num % 5 == 0 && num % 7 == 0) {
        printf("Hello world\n");
    } else {
        printf("Bye\n");
    }

    return 0;
}
