#include "bank.h"
extern Account *head;

Account* find_account(long long int acc_no)
{
    Account *temp = head;
    while (temp) {
        if (temp->account_number == acc_no)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

