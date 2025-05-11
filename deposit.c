#include "bank.h"
extern Account* head;

void deposit()
{
    TITLE("Deposit");
    long long int acc_no;
    float amount;
again:printf("Enter account number: ");
    scanf("%lld", &acc_no);
    if(account_number_check(acc_no))
    {
        goto again;
    }
    Account* acc = find_account(acc_no);
    if (!acc) {
        printf("Account not found!\n");
        return;
    }
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);
    acc->balance += amount;
    add_transaction(acc, DEPOSIT, amount);
    printf("Amount deposited successfully!\n");
}

