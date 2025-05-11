#include "bank.h"
extern Account* head;

void display_accounts()
{
    TITLE("***Accounts***");
    Account* temp = head;
    while (temp)
    {
        printf("Acc No: %lld | Name: %s | Balance: %.2f | Contacts: ",temp->account_number, temp->name, temp->balance);
        for (int i = 0; i < temp->contact_count; i++)
		{
            printf("%s", temp->contacts[i]);
            if (i < temp->contact_count - 1)
                printf(", ");
        }
        printf("\n");
        temp = temp->next;
    }
}
