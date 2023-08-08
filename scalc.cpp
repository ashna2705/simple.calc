#include <iostream>

using namespace std;

class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0.0; 
        }
    }
};

int main() {
    Calculator calculator;
    char operation;
    double num1, num2;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operation) {
        case '+':
            cout << "Result: " << calculator.add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << calculator.subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << calculator.multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << calculator.divide(num1, num2) << endl;
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            break;
    }

    return 0;
}