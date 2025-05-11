#include "bank.h"
extern Account* head;
void create_account()
{
     TITLE("Account creation");
     Account* new_acc = (Account*)malloc(sizeof(Account));
again:printf("Enter account number: ");
    scanf("%lld", &new_acc->account_number);
    if(account_number_check(new_acc->account_number))
    {
        goto again;
    }
    if (find_account(new_acc->account_number))
    {
        printf("Account number already exists!\n");
        free(new_acc);
        return;
    }

    printf("Enter name: ");
    while((getchar())!='\n');
    fgets((new_acc->name),50,stdin);
    if(new_acc->name[strlen(new_acc->name)-1]=='\n')
        new_acc->name[strlen(new_acc->name)-1]='\0';

    printf("Enter number of contact numbers: ");
    scanf("%d", &new_acc->contact_count);
    new_acc->contacts = (char**)malloc(new_acc->contact_count * sizeof(char*));
    for (int i = 0; i < new_acc->contact_count; i++)
	{
        	new_acc->contacts[i] = (char*)malloc(15 * sizeof(char));
        	printf("Enter contact number %d: ", i + 1);
        	scanf("%s", new_acc->contacts[i]);
    }

    new_acc->balance = 0;
    new_acc->transaction_count = 0;
    new_acc->next = head;
    head = new_acc;
    SUCCESS("Account created successfully.");
}

