#include "bank.h"
extern Account* head;

int account_number_check(long long int integer)
{
    if((integer)<0)
    {
        printf("Enter valid account number it should not be negative!\n");
        return 1;
    }
    if((integer)<10000000000 || (integer)>99999999999)
    {
        printf("Account number should contain 11 digits!\n");
        return 1;
    }

    return 0;
}

