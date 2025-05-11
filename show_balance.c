#include "bank.h"
extern Account* head;

void show_balance()
{
    TITLE("Balance");
    long long int acc_no;
again:printf("Enter account number: ");
    scanf("%lld", &acc_no);
    if(account_number_check(acc_no))
    {
        goto again;
    }
    Account* acc = find_account(acc_no);
    if (acc)
        printf("Current Balance: %.2f\n", acc->balance);
    else
        printf("Account not found!\n");
}
