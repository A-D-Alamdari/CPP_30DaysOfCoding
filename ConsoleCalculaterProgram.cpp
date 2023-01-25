# include <iostream>
# include <cmath>

using namespace std;

int main() {

    char op;
    double num1;
    double num2;
    double result;

    cout << "*********** CALCULATOR ***********" << endl;

    cout << "\nEnter either (+, -, /, *): ";
    cin >> op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
        case '+': 
            result = num1 + num2; 
            cout << "\nThe result of addition of " << num1 << " and " << num2 << " is: " << result << endl;
            break;
        case '-': 
            result = num1 - num2; 
            cout << "\nThe result of subtraction of " << num1 << " and " << num2 << " is: " << result << endl;
            break;
        case '/': 
            result = num1 / num2; 
            cout << "\nThe result of division of " << num1 << " and " << num2 << " is: " << result << endl;
            break;
        case '*': 
            result = num1 * num2; 
            cout << "\nThe result of multiplication of " << num1 << " and " << num2 << " is: " << result << endl;
            break;
        default: 
            cout << "\nPlease Enter Valid Operation (+, -, /, *)!.";
    }

    cout << "**********************************" << endl;

    return 0;
}