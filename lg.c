#include <stdio.h>
int find_largest_digit(int num) {
    int max_digit = 0;
    num = num < 0 ? -num : num;
    while (num > 0) {
        int digit = num % 10;
        if (digit > max_digit) {
            max_digit = digit;
        }
        num /= 10;
    }
    return max_digit;
}
int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int number;
    for (int i = 0; i < n; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &number);

        int largest_digit = find_largest_digit(number);
        printf("Largest digit in %d is %d\n", number, largest_digit);
    }
    return 0;
}
