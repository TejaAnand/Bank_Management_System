#include "bank.h"
extern Account* head;

void show_transaction_history()
{
    TITLE("Transaction history");
    long long int acc_no;
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
    printf("Last %d Transactions:\n", acc->transaction_count);
    for (int i = 0; i < acc->transaction_count; i++) {
        Transaction t = acc->transactions[i];
        printf("ID: %u | Type: %s | Amount: %.2f\n", t.id,
               (t.type == DEPOSIT ? "Deposit" :
                t.type == WITHDRAW ? "Withdraw" : "Transfer"), t.amount);
    }
}

