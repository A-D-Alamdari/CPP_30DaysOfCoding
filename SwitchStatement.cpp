# include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter the the day number: ";
    cin >> num;

    // if (num == 1) {
    //     cout << "Monday";
    // } else if (num == 2) {
    //     cout << "Tuesday";
    // } else if (num == 3) {
    //     cout << "Wednesday";
    // } else if (num == 4) {
    //     cout << "Thursday";
    // } else if (num == 5) {
    //     cout << "Friday";
    // } else if (num == 6) {
    //     cout << "Saturday";
    // } else if (num == 7) {
    //     cout << "Sunday";
    // } else {
    //     cout << "Invalid Input";
    // }

    switch (num) {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        case 7: cout << "Sunday"; break;
        default: cout << "Invalid Input"; 
    }

    return 0;
}