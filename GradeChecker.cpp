# include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter a number to check the grade: ";
    cin >> num;

    if (num < 0 || num > 100) {
        cout << "Wrong number.";
    } else if (num >= 0 && num < 50) {
        cout << "Fail!";
    } else if (num >= 50 && num <60) {
        cout << "D";
    } else if (num >= 60 && num < 70) {
        cout << "C";
    } else if (num >= 70 && num < 80) {
        cout << "B";
    } else if (num >= 80 && num < 90) {
        cout << "A";
    } else {
        cout << "A+";
    }

    return 0;
}