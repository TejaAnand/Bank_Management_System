#include "bank.h"
extern Account* head;

unsigned int generate_transaction_id() {
    static unsigned int id = 1000;
    return id++;
}
