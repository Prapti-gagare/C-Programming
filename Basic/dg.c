#include <stdio.h>
int main()
 {
    int number, digit;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 0) {
        number = -number;
        printf("-\n"); 
    }
      int reversed = 0, temp = number;
    do {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    } while (temp != 0);
    do {
        digit = reversed % 10;
        printf("%d\n", digit);
        reversed /= 10;
    } while (reversed != 0);
    return 0;
}
