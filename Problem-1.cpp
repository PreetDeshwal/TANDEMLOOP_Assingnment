#include <iostream>
using namespace std;

// Class defined for binding important variables and functions together
class Calculator {
private:
    double num1, num2;

public:
    Calculator(double n1, double n2) {
        num1 = n1;
        num2 = n2;
    }

    void operation(char op) {
        switch(op) {
            case '+': cout << "Result: " << add() << endl;
                      break;
            case '-': cout << "Result: " << subtract() << endl;
                      break;
            case '*': cout << "Result: " << multiply() << endl;
                      break;
            case '/': 
                      if (num2 != 0)
                          cout << "Result: " << divide() << endl;
                      else
                          cout << "Error: Division by zero is not allowed!" << endl;
                      break;
            default: cout << "Enter a valid operation (+, -, *, /)\n";
        }
    }

    double add() { return num1 + num2; }
    double subtract() { return num1 - num2; }
    double multiply() { return num1 * num2; }
    double divide() { return num1 / num2; }
};

int main() {
    double a, b;
    char op;

    cout << "Enter First Value: ";
    cin >> a;

    cout << "Enter Second Value: ";
    cin >> b;

    cout << "Enter Operator (+, -, *, /): ";
    cin >> op;

    Calculator Calc(a, b);
    Calc.operation(op);

    return 0;
}
