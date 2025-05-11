#include "bank.h"
extern Account* head;

void add_transaction(Account* acc, TransactionType type, float amount)
{
    if (acc->transaction_count < MAX_TRANSACTIONS)
    {
        Transaction* t = &acc->transactions[acc->transaction_count++];
        t->id = generate_transaction_id();
        t->type = type;
        t->amount = amount;
    }
    else
    {
        // shift left to remove oldest
        for (int i = 1; i < MAX_TRANSACTIONS; i++) {
            acc->transactions[i-1] = acc->transactions[i];
    }
        Transaction* t = &acc->transactions[MAX_TRANSACTIONS-1];
        t->id = generate_transaction_id();
        t->type = type;
        t->amount = amount;
    }
}

