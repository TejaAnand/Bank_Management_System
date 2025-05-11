#include "bank.h"
extern Account* head;
void delete_account()
{
    long long int acc_no;
    printf("Enter account number to delete: ");
    scanf("%lld", &acc_no);
    
    Account *temp = head, *prev = NULL;
    while (temp && temp->account_number != acc_no)
    {
        prev = temp;
        temp = temp->next;
    }
    if (!temp)
    {
        printf("Account not found!\n");
        return;
    }
    // Free contact list
    for (int i = 0; i < temp->contact_count; i++)
    {
        free(temp->contacts[i]);
    }
    free(temp->contacts);

    if (prev == NULL)
    {
        head = temp->next;
    }
    else
    {
        prev->next = temp->next;
    }

    free(temp);
    printf("Account deleted successfully!\n");
}

