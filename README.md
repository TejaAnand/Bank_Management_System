# 💳 Bank Management System in C 🏦

A **console-based mini project** written in C language that simulates basic banking functionalities like creating accounts, depositing/withdrawing money, transferring funds, tracking transactions, multiple contact support and account deletion!

---

## 🧠 Features

✅ Create Account with multiple 📱 contact numbers  
✅ Deposit & Withdraw money 💸  
✅ Transfer money between accounts 🔁  
✅ Maintain last 5 transactions 📜  
✅ Save & Load data to file 💾  
✅ Delete Account permanently ❌  
✅ Display All Accounts 👀  
✅ Error handling for invalid inputs 🚫  

---

## 📊 Functional Flow Diagram

```mermaid
flowchart TD
    Start([Start])
    Menu{Main Menu}
    Create[Create Account]
    Deposit[Deposit]
    Withdraw[Withdraw]
    Transfer[Transfer]
    History[Transaction History]
    Balance[Balance Enquiry]
    Delete[Delete Account]
    Display[Display Accounts]
    Save[Save to File]
    Quit[Quit]

    Start --> Menu
    Menu --> Create
    Menu --> Deposit
    Menu --> Withdraw
    Menu --> Transfer
    Menu --> History
    Menu --> Balance
    Menu --> Delete
    Menu --> Display
    Menu --> Save
    Menu --> Quit
```

---

## 📐 Data Structure Overview

```mermaid
classDiagram
    class Account {
        long long account_number
        char name[50]
        float balance
        char** contacts
        int contact_count
        Transaction transactions[5]
        int transaction_count
        Account* next
    }

    class Transaction {
        unsigned int id
        TransactionType type
        float amount
    }

    Account --> Transaction
```

---

## 🧑‍💻 How to Compile & Run

### 🔧 Compile
```bash
make
```

### ▶️ Run
```bash
./bankapp
```

---

## 🧪 Sample Input/Output

```txt
==================================== BANK MANAGEMENT SYSTEM ====================================
c: Create account	h: Transaction history	w: Withdraw
d: Deposit		b: Balance enquiry	t: Transfer
e: Display accounts	s: Save to file		f: Find account
x: Delete Account	q: Quit
Enter choice: 

```

---

## 🌱 Future Enhancements

✨ Add login authentication  
✨ Support interest calculation  
✨ Export data as CSV  
✨ GUI version using C++/GTK  

---

## 👨‍💻 Author

- 🎓 Developed by: *P.Teja Anand*
- 🏫 Mini Project Submission
- 🎯 Tech: C language, File Handling, Linked Lists, Pointers

---
