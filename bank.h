#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "epic_output.h"
#ifndef BANK_H
#define BANK_H

#define MAX_TRANSACTIONS 5

typedef enum { DEPOSIT, WITHDRAW, TRANSFER } TransactionType;

typedef struct
{
    unsigned int id;
    TransactionType type;
    float amount;
} Transaction;

typedef struct Account
{
    long long int account_number;
    char name[50];
    float balance;
    char** contacts;
    int contact_count;
    Transaction transactions[MAX_TRANSACTIONS];
    int transaction_count;
    struct Account* next;
} Account;


unsigned int generate_transaction_id();
Account* find_account(long long int acc_no);
void add_transaction(Account* acc, TransactionType type, float amount);
int account_number_check(long long int integer);
void create_account();
void delete_account();
void deposit();
void withdraw();
void transfer();
void show_balance();
void show_transaction_history();
void display_accounts();
void save_accounts();
void load_accounts();

#endif

