# include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter your number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "Even numbner";
    } else {
        cout << "Odd number";
    }

    return 0;
}