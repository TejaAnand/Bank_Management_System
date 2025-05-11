#include "bank.h"
extern Account* head;

void load_accounts()
{
    FILE* fp = fopen("data.txt", "r");
    if (!fp) return;

    while (1)
    {
        Account* acc = (Account*)malloc(sizeof(Account));
        if (!acc) break;

        int read_main = fscanf(fp, "%lld %s %f %d", &acc->account_number, acc->name, &acc->balance, &acc->contact_count);
        if (read_main != 4) {
            free(acc);
            break;
        }

        acc->contacts = (char**)malloc(acc->contact_count * sizeof(char*));
        if (!acc->contacts) {
            free(acc);
            break;
        }

        for (int i = 0; i < acc->contact_count; i++) {
            acc->contacts[i] = (char*)malloc(15 * sizeof(char));
            if (fscanf(fp, "%s", acc->contacts[i]) != 1) {
                // Clean up and break if read fails
                for (int j = 0; j <= i; j++) free(acc->contacts[j]);
                free(acc->contacts);
                free(acc);
                fclose(fp);
                return;
            }
        }

        if (fscanf(fp, "%d", &acc->transaction_count) != 1) {
            for (int i = 0; i < acc->contact_count; i++) free(acc->contacts[i]);
            free(acc->contacts);
            free(acc);
            break;
        }

        for (int i = 0; i < acc->transaction_count; i++) {
            if (fscanf(fp, "%u %d %f", &acc->transactions[i].id,
                       (int*)&acc->transactions[i].type,
                       &acc->transactions[i].amount) != 3) {
                // If read fails, stop loading this account
                acc->transaction_count = i;
                break;
            }
        }

        acc->next = head;
        head = acc;
    }

    fclose(fp);
}

