#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    float balance;
public:
    void createAccount() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter account number: ";
        cin >> accountNumber;
        balance = 0;
    }
    void deposit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance += amount;
        cout << "Deposit successful" << endl;
    }
    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if(amount > balance)
            cout << "Insufficient balance" << endl;
        else {
            balance -= amount;
            cout << "Withdrawal successful" << endl;
        }
    }
    void showBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    int choice;

    acc.createAccount();
    do {
        cout << "1. Deposit" << endl 
        << "2. Withdraw" << endl 
        << "3. Check Balance" << endl 
        << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1)
            acc.deposit();
        else if(choice == 2)
            acc.withdraw();
        else if(choice == 3)
            acc.showBalance();

    } while(choice != 4);
    return 0;
}