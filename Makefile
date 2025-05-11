
# Compiler
CC = cc

# Executable name
TARGET = bankapp

# Object files
OBJS = main.o create_account.o account_number_check.o add_transaction.o deposit.o display_accounts.o find_account.o generate_transaction_id.o load_accounts.o save_accounts.o show_transaction_history.o transfer.o withdraw.o show_balance.o delete_account.o

# Build rule
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

main.o: main.c
	$(CC) -c main.c

create_account.o: create_account.c
	$(CC) -c create_account.c

account_number_check.o: account_number_check.c
	$(CC) -c account_number_check.c

add_transaction.o: add_transaction.c
	$(CC) -c add_transaction.c

deposit.o: deposit.c
	$(CC) -c deposit.c

display_accounts.o: display_accounts.c
	$(CC) -c display_accounts.c

find_account.o: find_account.c
	$(CC) -c find_account.c

generate_transaction_id.o: generate_transaction_id.c
	$(CC) -c generate_transaction_id.c

load_accounts.o: load_accounts.c
	$(CC) -c load_accounts.c

save_accounts.o: save_accounts.c
	$(CC) -c save_accounts.c

show_transaction_history.o: show_transaction_history.c
	$(CC) -c show_transaction_history.c

transfer.o: transfer.c
	$(CC) -c transfer.c

withdraw.o: withdraw.c
	$(CC) -c withdraw.c

show_balance.o: show_balance.c
	$(CC) -c show_balance.c

delete_account.o: delete_account.c
	$(CC) -c delete_account.c

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)
