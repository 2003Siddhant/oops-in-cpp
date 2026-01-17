#include <bits/stdc++.h>
using namespace std;

// Abstract base class (Abstraction)
class BankAccount
{
protected:
    string holderName;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNo, double bal)
        : holderName(name), accountNumber(accNo), balance(bal) {}

    // Pure virtual functions (Abstraction + Polymorphism)
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual void calculateProfitOrLoss() = 0;

    void showBalance()
    { // Encapsulation: controlled access
        cout << "Account Holder: " << holderName
             << " | Account No: " << accountNumber
             << " | Balance: " << balance << endl;
    }

    virtual ~BankAccount() {}
};

// Derived class: SavingsAccount (Inheritance)
class SavingsAccount : public BankAccount
{
    double interestRate; // extra feature for profit

public:
    SavingsAccount(string name, int accNo, double bal, double rate)
        : BankAccount(name, accNo, bal), interestRate(rate) {}

    void deposit(double amount) override
    {
        balance += amount;
        cout << "Deposited " << amount << " into SavingsAccount\n";
    }

    void withdraw(double amount) override
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrew " << amount << " from SavingsAccount\n";
        }
        else
        {
            cout << "Insufficient funds in SavingsAccount\n";
        }
    }

    void calculateProfitOrLoss() override
    {
        double profit = balance * interestRate / 100;
        cout << "SavingsAccount Profit (Interest): " << profit << endl;
    }
};

// Derived class: CurrentAccount (Inheritance)
class CurrentAccount : public BankAccount
{
    double overdraftLimit; // extra feature for loss

public:
    CurrentAccount(string name, int accNo, double bal, double limit)
        : BankAccount(name, accNo, bal), overdraftLimit(limit) {}

    void deposit(double amount) override
    {
        balance += amount;
        cout << "Deposited " << amount << " into CurrentAccount\n";
    }

    void withdraw(double amount) override
    {
        if (amount <= balance + overdraftLimit)
        {
            balance -= amount;
            cout << "Withdrew " << amount << " from CurrentAccount\n";
        }
        else
        {
            cout << "Overdraft limit exceeded in CurrentAccount\n";
        }
    }

    void calculateProfitOrLoss() override
    {
        if (balance < 0)
        {
            cout << "CurrentAccount Loss (Overdraft): " << balance << endl;
        }
        else
        {
            cout << "CurrentAccount has no loss. Balance is positive.\n";
        }
    }
};

int main()
{
    cout << "=== Bank OOP System ===\n";
    cout << "Enter account type (1 for Savings, 2 for Current): ";
    int choice;
    cin >> choice;

    string name;
    int accNo;
    double bal;

    cout << "Enter Account Holder Name: ";
    cin >> name;
    cout << "Enter Account Number: ";
    cin >> accNo;
    cout << "Enter Initial Balance: ";
    cin >> bal;

    BankAccount *account = nullptr;

    if (choice == 1)
    {
        double rate;
        cout << "Enter Interest Rate (%): ";
        cin >> rate;
        account = new SavingsAccount(name, accNo, bal, rate);
    }
    else
    {
        double limit;
        cout << "Enter Overdraft Limit: ";
        cin >> limit;
        account = new CurrentAccount(name, accNo, bal, limit);
    }

    // Perform operations
    account->showBalance();

    cout << "Enter deposit amount: ";
    double dep;
    cin >> dep;
    account->deposit(dep);

    cout << "Enter withdraw amount: ";
    double wd;
    cin >> wd;
    account->withdraw(wd);

    account->showBalance();
    account->calculateProfitOrLoss();

    delete account;
    return 0;
}
