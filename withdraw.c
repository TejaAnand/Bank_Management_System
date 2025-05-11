#include "bank.h"
extern Account* head;

void withdraw()
{
    TITLE("Withdraw");
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
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);
    if (amount > acc->balance) {
        printf("Insufficient balance!\n");
        return;
    }
    acc->balance -= amount;
    add_transaction(acc, WITHDRAW, amount);
    printf("Amount withdrawn successfully!\n");
}

