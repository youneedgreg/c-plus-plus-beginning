#include <iostream>
using namespace std;

// Function prototypes for different operations
int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
float division(int a, int b);

// Function definitions
int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

float division(int a, int b) {
    return static_cast<float>(a) / b; // To handle float division
}

int main() {
    int num1, num2;
    char operation;
    char continueCalculation;

    do {
        // Ask the user for input
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        cout << "Enter the operation (+, -, x, /): ";
        cin >> operation;

        // Perform the chosen operation
        switch (operation) {
            case '+':
                cout << "Result: " << addition(num1, num2) << endl;
                break;
            case '-':
                cout << "Result: " << subtraction(num1, num2) << endl;
                break;
            case 'x':
                cout << "Result: " << multiplication(num1, num2) << endl;
                break;
            case '/':
                if (num2 != 0)
                    cout << "Result: " << division(num1, num2) << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            default:
                cout << "Invalid operation!" << endl;
        }

        // Ask if the user wants to perform another calculation
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> continueCalculation;

    } while (continueCalculation == 'y' || continueCalculation == 'Y');

    cout << "Thank you for using the calculator. Goodbye!" << endl;

    return 0;
}