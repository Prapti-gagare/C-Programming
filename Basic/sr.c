#include <stdio.h>

int main() {
    int n, i;
    long long sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += (long long)i * i;
    }
    printf("Sum of squares from 1 to %d is: %lld\n", n, sum);
    return 0;
}
