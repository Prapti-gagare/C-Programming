#include <stdio.h>

struct BankAccount 
{
    int accountNumber;
    char name[50];
    float balance;
};

int main() 
{

    struct BankAccount acc;

    printf("Enter Account Number: ");
    scanf("%d", &acc.accountNumber);

    printf("Enter Account Holder Name: ");
    scanf("%s", acc.name);

    printf("Enter Account Balance: ");
    scanf("%f", &acc.balance);

    printf("\n--- Bank Account Details ---\n");
    printf("Account Number : %d\n", acc.accountNumber);
    printf("Name           : %s\n", acc.name);
    printf("Balance        : %.2f\n", acc.balance);

    return 0;
}
