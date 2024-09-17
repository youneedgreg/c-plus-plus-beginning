#include <iostream>
using namespace std;

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);

int main() {
    int num1, num2;
    char operation, continueOperation;

    do {
        // Asking the user for two numbers and the operation type
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        cout << "Enter operation (+, -, *, /): ";
        cin >> operation;

        // Choosing the operation based on the user's input
        switch (operation) {
            case '+':
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case '-':
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case '*':
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << "Result: " << divide(num1, num2) << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid operation!" << endl;
                continue;  // Skips the following lines and continues with the next iteration of the loop
        }

        // Ask if the user wants to perform another operation
        cout << "Do you want to perform another operation? (y/n): ";
        cin >> continueOperation;
    } while (continueOperation == 'y' || continueOperation == 'Y');

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if (b == 0) {
        cout << "Division by zero is not possible.\n";
        return 0;  // Return 0 or handle as needed
    }
    return static_cast<double>(a) / b;
}
