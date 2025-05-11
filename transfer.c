#include "bank.h"
extern Account* head;

void transfer()
{
     TITLE("Transfer to another account");
    long long int from_acc_no, to_acc_no;
    float amount;
again1:printf("Enter your account number: ");
    scanf("%lld", &from_acc_no);
    if(account_number_check(from_acc_no))
    {
        goto again1;
    }
    Account* from = find_account(from_acc_no);
    if (!from) {
        printf("Your account not found!\n");
        return;
    }

again2:printf("Enter receiver's account number: ");
    scanf("%lld", &to_acc_no);
    if(account_number_check(to_acc_no))
    {
        goto again2;
    }
    Account* to = find_account(to_acc_no);
    if (!to) {
        printf("Receiver account not found!\n");
        return;
    }

    printf("Enter amount to transfer: ");
    scanf("%f", &amount);
    if (amount > from->balance) {
        printf("Insufficient balance!\n");
        return;
    }

    from->balance -= amount;
    to->balance += amount;
    add_transaction(from, TRANSFER, amount);
    add_transaction(to, DEPOSIT, amount);
    SUCCESS("Transaction completed successfully.");
}

