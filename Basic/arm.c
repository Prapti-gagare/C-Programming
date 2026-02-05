#include <stdio.h>
#include <math.h>
int main() {
    int num, originalNum, rem, result = 0, n = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    for (int temp = num; temp != 0; temp /= 10) {
        n++;
    }
    for (int temp = num; temp != 0; temp /= 10) {
        rem = temp % 10;
        result += pow(rem, n);
    }
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}
