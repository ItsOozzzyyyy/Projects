#include <iostream>
using namespace std;

double add(int num1, int num2) {
    return num1 + num2;
}

double subtract(int num1, int num2) {
    return num1 - num2;
}

double multiply(int num1, int num2) {
    return num1 * num2;
}

double divide(int num1, int num2) {
    if (num2 == 0) {
        return 0; 
    }
    return num1 / (double)num2; 
}

int modulusOperation(int num1, int num2) { 
    if (num2 == 0) {
        return -1;
    }
    return num1 % num2;
}

int main() {
    int num1, num2, choice;
    char continueChoice;

    cout << "\t\t\t\t\t\tMENU\n\n";

    do {
        cout << "Input your first number: ";
        cin >> num1;
        cout << "\nInput your second number: ";
        cin >> num2;

        cout << "1. Addition\n"
             << "2. Subtraction\n"
             << "3. Multiplication\n"
             << "4. Division\n"
             << "5. Modulus\n"
             << "Input your chosen operator: " << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "The result of the addition is " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "The result of the subtraction is " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "The result of the multiplication is " << multiply(num1, num2) << endl;
                break;
            case 4:
                {
                    double result = divide(num1, num2);
                    if (result == 0 && num2 == 0) {
                        cout << "Error: Division by zero is not allowed." << endl;
                    } else {
                        cout << "The result of the division is " << result << endl;
                    }
                }
                break;
            case 5:
                {
                    int result = modulusOperation(num1, num2); 
                    if (result == -1) {
                        cout << "Error: Modulus by zero is not allowed." << endl;
                    } else {
                        cout << "The result of the modulus is " << result << endl;
                    }
                }
                break;
            default:
                cout << "Invalid Choice!" << endl;
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> continueChoice;

    } while (continueChoice == 'y' || continueChoice == 'Y');

    cout << "THANK YOU!";
    return 0;
}