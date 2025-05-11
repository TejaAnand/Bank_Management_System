#include "bank.h"
Account* head; 
int main()
{
    char choice;
    load_accounts();
    while (1)
    {
        printf("\n");
        BANNER("BANK MANAGEMENT SYSTEM");
        printf("c: Create account\th: Transaction history\tw: Withdraw\n");
        printf("d: Deposit\t\tb: Balance enquiry\tt: Transfer\n");
        printf("e: Display accounts\ts: Save to file\t\tf: Find account\nx: Delete Account\tq: Quit\n");
        printf("Enter choice: ");
        scanf(" %c", &choice);
        switch (choice) {
            case 'c': create_account(); break;
            case 'h': show_transaction_history(); break;
            case 'w': withdraw(); break;
            case 'd': deposit(); break;
            case 'b': show_balance(); break;
            case 't': transfer(); break;
            case 'e': display_accounts(); break;
            case 's': save_accounts(); break;
            case 'f': {
                long long int acc_no;
                printf("Enter account number: ");
                scanf("%lld", &acc_no);
                Account* acc = find_account(acc_no);
                if (acc) {
                    printf("Account Found: %s\n", acc->name);
                } else {
                    WARNING("Account not Found.");
                }
                break;
            }
            case 'x': delete_account(); break;
            case 'q': save_accounts(); printf("Goodbye!\n"); exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}

