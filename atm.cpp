#include <iostream>
using namespace std;

int main()
{
    int choice;
    double balance = 10000, amount;

    do {
        // Display the menu
        cout << "Welcome to the ATM!\n"
             << "1. Check the Balance\n"
             << "2. Withdraw Money\n"
             << "3. Deposit Money\n"
             << "4. Exit\n"
             << "Please enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Check balance
                cout << "Your current balance is PHP " << balance << endl;
                break;

            case 2:
                // Withdraw money
                cout << "How much will you withdraw? (minimum of 1000): ";
                cin >> amount;
                if (amount >= 1000 && amount <= balance) {
                    balance -= amount;
                    cout << "You withdrew PHP " << amount << ". Your current balance is PHP " << balance << endl;
                } else if (amount < 1000) {
                    cout << "The amount is less than the minimum withdrawal limit of PHP 1000.\n";
                } else {
                    cout << "Insufficient balance to withdraw PHP " << amount << ".\n";
                }
                break;

            case 3:
                // Deposit money
                cout << "How much will you deposit? (minimum of 1000): ";
                cin >> amount;
                if (amount >= 1000) {
                    balance += amount;
                    cout << "You deposited PHP " << amount << ". Your current balance is PHP " << balance << endl;
                } else {
                    cout << "The amount is less than the minimum deposit limit of PHP 1000.\n";
                }
                break;

            case 4:
                // Exit
                cout << "Thank you for using the ATM. Goodbye!\n";
                break;

            default:
                // Invalid choice
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}

