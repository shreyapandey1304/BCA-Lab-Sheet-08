
#include <iostream>
using namespace std;

// Class BankAccount
class BankAccount
{
private:
    float balance;

public:
    // Function to deposit money
    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Amount deposited successfully." << endl;
    }

    // Function to withdraw money
    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    // Function to display balance
    void display()
    {
        cout << "Current Balance: " << balance << endl;
    }

    // Function to initialize balance
    void setBalance(float amount)
    {
        balance = amount;
    }
};

int main()
{
    BankAccount account;
    float amount;

    account.setBalance(5000);

    cout << "Initial ";
    account.display();

    cout << "Enter amount to deposit: ";
    cin >> amount;
    account.deposit(amount);

    cout << "Enter amount to withdraw: ";
    cin >> amount;
    account.withdraw(amount);

    account.display();

    return 0;
}
