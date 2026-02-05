#include <stdio.h>

int main() 
{
    int numbers[100];  
    int count = 0;     
    int num;
    int duplicateFound = 0;

    printf("Enter numbers (program stops when you enter a duplicate):\n");
    while (!duplicateFound) {
        printf("Enter number: ");
        scanf("%d", &num);

        int i;
        for (i = 0; i < count; i++) {
            if (numbers[i] == num) {
                duplicateFound = 1;
                break;
            }
        }
        if (!duplicateFound) {
            numbers[count] = num;
            count++;
        }
    }

    printf("\nDuplicate number %d detected. Program terminated.\n", num);
    return 0;
}
