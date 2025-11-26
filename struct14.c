#include <stdio.h>

struct ATM 
{
    long accountNumber;
    char type;     
    float amount;
    float finalBalance;
};

int main()
 {
    struct ATM t;
    float currentBalance;

    printf("Enter account number: ");
    scanf("%ld", &t.accountNumber);

    printf("Enter current balance: ");
    scanf("%f", &currentBalance);

    printf("Enter transaction type (D/W): ");
    scanf(" %c", &t.type);

    printf("Enter amount: ");
    scanf("%f", &t.amount);

    if (t.type == 'D' || t.type == 'd')
     {
        t.finalBalance = currentBalance + t.amount;
    }
     else if (t.type == 'W' || t.type == 'w')
     {
        if (t.amount > currentBalance)
         {
            printf("\nError: Insufficient balance!\n");
            return 0;
        }
        t.finalBalance = currentBalance - t.amount;
    } 
    else
     {
        printf("\nInvalid transaction type!\n");
        return 0;
    }

    printf("\n----- TRANSACTION SUMMARY -----\n");
    printf("Account Number : %ld\n", t.accountNumber);
    printf("Transaction    : %s\n", (t.type=='D'||t.type=='d') ? "Deposit" : "Withdrawal");
    printf("Amount         : %.2f\n", t.amount);
    printf("Final Balance  : %.2f\n", t.finalBalance);

    return 0;
}
